#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_4" << std::endl;
}

void analyze_file(const string& filename)
{
    ifstream file(filename);
    if (!file.is_open())
    {
        cout << "Файл не найден!\n";
        return;
    }
    int lines = 0;
    int words = 0;
    string line, word;
    while (getline(file, line))
        lines++;
    file.clear();
    file.seekg(0);
    while (file >> word)
        words++;
    file.close();
    ofstream report("report.txt");
    report << "Lines: " << lines << endl;
    report << "Words: " << words << endl;
    report.close();
    cout << "Информация сохранена в файл report.txt\n";
}
int main()
{
    printStudentInfo();
    string filename;
    cout << "Введите название ранее созданного файла (with .txt): ";
    cin >> filename;
    analyze_file(filename);
    system("pause");
}
