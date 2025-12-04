#include <iostream>
#include <string>
using namespace std;

void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_2" << std::endl;
}

struct BankAccount {
    string accNumber;
    string owner;
    double balance;
    void deposit(double amount) {
        balance += amount;
    }
    void printSummary() {
        cout << "ID аккаунта: " << accNumber << "\n";
        cout << "Владелец: " << owner << "\n";
        cout << "Баланс: " << balance << "\n";
    }
    void withdraw(double amount) {
        if (balance >= amount) balance -= amount;
        else cout << "Недостаточно средств на счёте\n";
    }
};
int main() {
    printStudentInfo();
    BankAccount acc1 = { "AH-223", "IOAN", 20000.0 };
    acc1.printSummary();
    cout << "\n";
    acc1.deposit(35000.0);
    acc1.printSummary();
    cout << "\n";
    acc1.withdraw(55000.0);
    acc1.printSummary();
    cout << "\n";
    acc1.withdraw(10000.0);
    acc1.printSummary();
    system("pause");
}
