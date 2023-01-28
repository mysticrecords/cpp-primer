#include <iostream>

int main() {

    int num1 {0}, num2 {0}, sum {0};


    std::cout << "select two numbers to sum the values between them" << std::endl;

    std::cin >> num1 >> num2;

    if(num1 > num2) {
        while(num1 >= num2) {
            sum += num1;
            --num1;
        }
    } else {
         while(num1 <= num2) {
            sum += num1;
            ++num1;
        }
    }

    std::cout << sum <<std::endl;

    return 0;
}