#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_1" << std::endl;
}
void writeBooks(const vector<string>& names,
    const vector<string>& authors,
    const vector<int>& years)
{
    ofstream file("books.txt");
    if (!file.is_open())
    {
        cout << "Ошибка открытия файла books.txt\n";
        return;
    }

    for (int i = 0; i < names.size(); i++)
    {
        file << i + 1 << ". Name: " << names[i] << "\n";
        file << "   Author: " << authors[i] << "\n";
        file << "   Year: " << years[i] << "\n";
        file << "----------\n";
    }
    file.close();
}

int main()
{
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
    writeBooks(names, authors, years);
    system("pause");
}
