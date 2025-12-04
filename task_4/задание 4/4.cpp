#include <iostream>
#include <vector>
using namespace std;

void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_4" << std::endl;
}
struct Rectangle {
    double x1, y1;
    double x2, y2;
    double calculateArea() {
        return (x2 - x1) * (y1 - y2);
    }
    double calculatePerimeter() {
        return 2 * ((x2 - x1) + (y1 - y2));
    }
    void isSquare() {
        if ((x2 - x1) == (y1 - y2))
            cout << "Ваша фигура квадрат\n";
        else
            cout << "Ваша фигура не квадрат\n";
    }
    void move(double dx, double dy) {
        x1 += dx; x2 += dx;
        y1 += dy; y2 += dy;
        cout << "Перемещено по этим координатам: (" << x1 << ", " << y1 << ") и (" << x2 << ", " << y2 << ")\n";
    }
};
int main() {
    printStudentInfo();
    vector<Rectangle> rects(1);
    rects[0].x1 = -4;
    rects[0].y1 = 4;
    rects[0].x2 = 0;
    rects[0].y2 = 0;
    for (auto& r : rects) {
        cout << "Площадь: " << r.calculateArea() << endl;
        cout << "Периметр: " << r.calculatePerimeter() << endl;
        r.isSquare();
        r.move(3, 2);
    }
    system("pause");
}
