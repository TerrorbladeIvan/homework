#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <random>
#include <Windows.h>
#include "stdafx.h"

using namespace std;

void printStudentInfo() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_1" << std::endl;
}
Иван
int main() {
    printStudentInfo();
    map<string, vector<int>> students;
    int studentCount = 10;
    int gradesCount = 5;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(2, 5);

    cout << "Введите " << studentCount << " имён студентов на латинице:" << endl;

    for (int i = 0; i < studentCount; ++i) {
        string name;
        cout << "Студент " << i + 1 << ": ";
        getline(cin, name);
        vector<int> grades;
        for (int j = 0; j < gradesCount; ++j) {
            grades.push_back(dis(gen));
        }

        students[name] = grades;
    }

    cout << "\nОценки: " << string << endl;
    cout << "" << endl;

    for (const auto& student : students) {
        cout << student.first << ": ";
        for (int grade : student.second) {
            cout << grade << " ";
        }
        cout << endl;
    }

    return 0;
}