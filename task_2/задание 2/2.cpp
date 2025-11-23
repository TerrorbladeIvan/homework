#include <iostream>
#include <map>
#include <string>

using namespace std;

void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    cout << "Student: Коломийцев Иван Денисович" << endl;
    cout << "Group: М1О-134БВ-25" << endl;
    cout << "Task: task_2" << endl;
}

void addStudent(map<string, bool>& students, const string& name, bool hasLicense) {
    students[name] = hasLicense;
    cout << "Добавлен: " << name << ": " << (hasLicense ? "Есть права" : "Нет прав") << endl;
}

void removeStudent(map<string, bool>& students, const string& name) {
    auto it = students.find(name);
    if (it != students.end()) {
        students.erase(it);
        cout << "Удалён: " << name << endl;
    }
}

void printMap(const map<string, bool>& students) {
    cout << "Студенты с правами:" << endl;
    for (const auto& student : students) {
        cout << student.first << ": " << (student.second ? "Есть" : "Нету") << endl;
    }
}

int main() {
    printStudentInfo();

    map<string, bool> students;

    cout << "Функция добавления:" << endl;
    addStudent(students, "Алексей", true);
    addStudent(students, "Александр", false);
    addStudent(students, "Артемий", true);
    addStudent(students, "Андрей", false);

    printMap(students);

    cout << "Функция удаления:" << endl;
    removeStudent(students, "Алексей");
    removeStudent(students, "Андрей");

    printMap(students);

    cout << "Добавление других студентов:" << endl;
    addStudent(students, "Адам", true);
    addStudent(students, "Архип", false);

    printMap(students);

    system("pause");
}