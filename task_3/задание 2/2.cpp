#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_2" << std::endl;
}
void read_books()
{
    ifstream file("books.txt");
    if (!file.is_open())
    {
        cout << "Ошибка открытия файла!\n";
        return;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}
int main()
{
    printStudentInfo();
    read_books();
    system("pause");
}