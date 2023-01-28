#include <iostream>

int main() {

    /*while is better used of we don't know how many times a block is to be iterated over
    * only that we know the condition statement
    *for loop is benefical if we know exactly how many times we need to to iterate over 
    *a body of code
    *for loop for readabilty - setting init, condition and expression in 1 line makes it very clear
    *for another programmer to easily see what the entire code block is responsible for in one line
    */


    int num {10};

    while(num >= 0) {

        std::cout << num << std::endl;

        --num;
    }

    int sum {0};

    for(size_t i = 50; i <= 100; ++i) {
        sum += i;
    }

    return 0;
}