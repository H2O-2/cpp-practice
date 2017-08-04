#include <iostream>

int uninit;

int main() {
    char val;
    int wage = 1;
    int salary = wage = 100;

    std::cout << salary << '\n' << wage << std::endl;

    return 0;
}
