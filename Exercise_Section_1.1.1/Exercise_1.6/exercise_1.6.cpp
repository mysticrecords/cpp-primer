#include <iostream>

int main () 
{
    /*program fragment is not legal
    * line two and there do not have a left operand to the output operator
    * line one terminates the statement making the first line legal and the following not
    */
    std::cout << "The sum of " << v1; << " and " << v2;
<< " is " << v1 + v2 << std::endl;

    return 0;
}