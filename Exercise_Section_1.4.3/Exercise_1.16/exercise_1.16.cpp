#include <iostream>
#include <string>
#include <sstream>
#include <vector>

// std::vector<std::string> split(const std::string str, char delim)
//     {
//     std::vector<std::string> result;
//     std::istringstream ss{str};
//     std::string token;
//     while (std::getline(ss, token, delim)) {
//         if (!token.empty()) {
//         result.push_back(token);
//         }
//     }
//     return result;
//     } 


int main () {

    int value {0}, sum {0};
    std::string val {" "};

    std::cout << "Enter numbers you would like to sum together. separate them by a space" << std::endl;

    while(std::cin >> value) {
        sum+= value;
    }

    std::cout << sum << std::endl;

    // std::cin >> val;

    // std::cout << val;

    return 0;
}