#include <iostream>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int a = 10, b = 5;
    std::cout << "Сложение: " << add(a, b) << std::endl;
    std::cout << "Вычитание: " << subtract(a, b) << std::endl;
    std::cout << "Умножение: " << multiply(a, b) << std::endl;
}