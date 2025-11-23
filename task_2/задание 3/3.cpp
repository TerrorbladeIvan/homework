#include <iostream>  
#include <vector>  
#include <string>  

using namespace std;

void printStudentInfo() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Student: Коломийцев Иван Денисович" << std::endl;
    std::cout << "Group: М1О-134БВ-25" << std::endl;
    std::cout << "Task: task_3" << std::endl;
    cout << endl;
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    std::cout << "My vector has " << vec.size() << " of these elements:" << std::endl;
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "[" << i << "] -> " << vec[i] << std::endl;
    }
}

// Перегрузка оператора + для векторов  
template<typename T>
std::vector<T> operator+(const std::vector<T>& vec1, const std::vector<T>& vec2) {
    std::vector<T> result = vec1;
    result.insert(result.end(), vec2.begin(), vec2.end());
    return result;

    system("pause");

}