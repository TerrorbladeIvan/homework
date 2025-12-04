#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_3" << std::endl;
}

void shuffle_vector(vector<int>& vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        int j = rand() % vec.size();
        swap(vec[i], vec[j]);
    }
}
void create_incorrect(const vector<string>& names, const vector<string>& authors, const vector<int>& years)
{
    vector<int> i1 = { 0,1,2,3,4 };
    vector<int> i2 = { 0,1,2,3,4 };
    vector<int> i3 = { 0,1,2,3,4 };
    shuffle_vector(i1);
    shuffle_vector(i2);
    shuffle_vector(i3);
    ofstream file("incorrect_books.txt");
    if (!file.is_open())
    {
        cout << "Ошибка открытия файла!\n";
        return;
    }
    for (int i = 0; i < names.size(); i++)
    {
        file << i + 1 << ". Name: " << names[i1[i]] << endl;
        file << "   Author: " << authors[i2[i]] << endl;
        file << "   Year: " << years[i3[i]] << endl;
        file << "----------\n";
    }
    file.close();
}
int main()
{
    srand(time(0));
    printStudentInfo();
    vector<string> names = {
        "Kapitanskaya dochka",
        "1984",
        "Krizhovnik",
        "Officially Dead",
        "Dracula"
    };
    vector<string> authors = {
        "Alexander Pushkin",
        "George Orwell",
        "Anton Chehov",
        "Richard Prescott",
        "Bram Stocker"
    };
    vector<int> years = { 1837, 1949, 1898, 2005, 1897 };
    create_incorrect(names, authors, years);
    system("pause");
}
