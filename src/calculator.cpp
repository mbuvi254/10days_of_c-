#include <iostream>
#include <string>

double x;
double y;
double z;
int main() {
    std::cout << "Enter first number: ";
    std::cin >> x;
    std::cout << "Enter second number: ";
    std::cin >> y;
    z = x + y;
    std::cout << "Sum: " << z << std::endl;
    return 0;

}