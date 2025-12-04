#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_3" << std::endl;
}

struct square
{
    string name;
    int side;
    void display()
    {
        cout << "имя фигуры: " << name << endl;
        cout << "физические хар-ки: стороны = " << side << endl;
    }
    void perimeters()
    {
        cout << "нахождение периметра: " << 4 * side << endl;
    }
    void areas()
    {
        cout << "нахождение площади: " << side * side << endl;
    }
    void angles()
    {
        cout << "нахождение углов: 90 90 90 90" << endl;
    }
};
struct rectangle
{
    string name;
    int side1, side2;
    void display()
    {
        cout << "имя фигуры: " << name << endl;
        cout << "физические хар-ки: стороны = " << side1 << ", " << side2 << endl;
    }
    void perimeters()
    {
        cout << "нахождение периметра: " << (2 * side1 + 2 * side2) << endl;
    }
    void areas()
    {
        cout << "нахождение площади: " << (side1 * side2) << endl;
    }
    void angles()
    {
        cout << "нахождение углов: 90 90 90 90" << endl;
    }
};
struct triangle
{
    string name;
    float leg1, leg2;
    float hyp() { return sqrt(leg1 * leg1 + leg2 * leg2); }
    void display()
    {
        cout << "имя фигуры: " << name << endl;
        cout << "физические хар-ки: катеты = " << leg1 << ", " << leg2 << endl;
    }
    void perimeters()
    {
        cout << "нахождение периметра: " << (leg1 + leg2 + hyp()) << endl;
    }
    void areas()
    {
        cout << "нахождение площади: " << (leg1 * leg2 / 2) << endl;
    }
    void angles()
    {
        cout << "нахождение углов: 90 ";
        float h = hyp();
        float a1 = asin(leg1 / h) * 180 / 3.14;
        float a2 = asin(leg2 / h) * 180 / 3.14;
        cout << a1 << " " << a2 << endl;
    }
};
struct circle
{
    string name;
    float radius;
    void display()
    {
        cout << "имя фигуры: " << name << endl;
        cout << "физические хар-ки: радиус = " << radius << endl;
    }
    void perimeters()
    {
        cout << "нахождение периметра: " << (2 * 3.14 * radius) << endl;
    }
    void areas()
    {
        cout << "нахождение площади: " << (3.14 * radius * radius) << endl;
    }
    void angles()
    {
        cout << "нахождение углов: 360" << endl;
    }
};
struct hexagram
{
    string name;
    float side;
    void display()
    {
        cout << "имя фигуры: " << name << endl;
        cout << "физические хар-ки: сторона = " << side << endl;
    }
    void perimeters()
    {
        cout << "нахождение периметра: " << (6 * side) << endl;
    }
    void areas()
    {
        cout << "нахождение площади: " << ((3 * sqrt(3) * side * side) / 2) << endl;
    }
    void angles()
    {
        cout << "нахождение углов: 120 120 120 120 120 120" << endl;
    }
};
int main()
{
    printStudentInfo();
    square sq = {"Квадрат", 5 };
    rectangle rc = {"Прямоугольник", 10, 5};
    triangle tr = {"Правильный треугольник", 6, 12};
    circle cr = {"Круг", 5};
    hexagram hx = {"Шестиугольник", 5};
    sq.display();
    sq.perimeters();
    sq.areas();
    sq.angles();
    cout << endl;

    rc.display();
    rc.perimeters();
    rc.areas();
    rc.angles();
    cout << endl;

    tr.display();
    tr.perimeters();
    tr.areas();
    tr.angles();
    cout << endl;

    cr.display();
    cr.perimeters();
    cr.areas();
    cr.angles();
    cout << endl;

    hx.display();
    hx.perimeters();
    hx.areas();
    hx.angles();
    cout << endl;
    system("pause");
}
