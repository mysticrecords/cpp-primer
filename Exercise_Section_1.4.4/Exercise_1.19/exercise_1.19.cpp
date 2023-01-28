#include <iostream>

int main() {

    int num1 {0}, num2 {0};

    std::cout << "select two numbers you wish to print from and to in increments of one" << std::endl;

    std::cin >> num1 >> num2;

    if(num1 > num2) {
        while(num1 >= num2) {

        std::cout << num1 << std::endl;

        --num1;
        }
    } else {
        while(num1 <= num2) {

        std::cout << num1 << std::endl;

        ++num1;
    }
    }

//potentially go into an infinite loop - not best practice
    // while(num1 < num2 || num1 > num2) {

    //     std::cout << num1 << std::endl;

    //     num1 < num2 ? num1++ : num1--;
    // }

    return 0;
}
