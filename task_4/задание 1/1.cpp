#include <iostream>
#include <vector>
using namespace std;

void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_1" << std::endl;
}

struct Book {
    string title;
    string author;
    int year;
    int pages;
    void display() {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Year: " << year << "\n";
        cout << "Pages: " << pages << "\n\n";
    }
    bool isModern() {
        return year > 2000;
    }
};
int main() {
    printStudentInfo();

    vector<Book> books = {
        {"Kak zavernut' waurmu?", "Ivan Ronin", 2022, 228},
        {"1984", "George Orwell", 1949, 335},
        {"Metro 2035", "Dmitriy Gluhovskiy", 2015, 384},
        {"Officially Dead", "Richard Prescott", 2005, 120},
        {"Dracula", "Bram Stocker", 1897, 502}
    };
    for (auto& b : books) b.display();
    cout << "Современная ли книга:\n";
    for (auto& b : books) {
        cout << b.title << ": " << (b.isModern() ? "true" : "false") << "\n";
    }
    system("pause");
}
