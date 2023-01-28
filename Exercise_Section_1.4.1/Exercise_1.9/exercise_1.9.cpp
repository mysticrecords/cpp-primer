#include <iostream>

int main() {

    int num{50};
    int sum {0};

    while(num <= 100) {
        sum += num;
        ++num;
        
        std::cout << sum << std::endl;
    }

    std::cout << sum << std::endl;


    return 0;
}