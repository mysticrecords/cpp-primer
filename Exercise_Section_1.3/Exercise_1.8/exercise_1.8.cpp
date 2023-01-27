#include <iostream>

int main() {

/*this will compile it is a valid output statement
*there is a namespace, scope operator to define the cout object
* a left hand operand, output oprator and valid right hand operand inside quotation marks;
*/
std::cout << "/*";
/*this will compile it is a valid output statement
*there is a namespace, scope operator to define the cout object
* a left hand operand, output oprator and valid right hand operand inside quotation marks;
*/
std::cout << "*/";
/*this will not compile and is not a valid output statement
*the right hand delimiter of the paired comment includes the left hand quotation marks as
*part of the comment between the delimiters.  The string literal only opens
*from the right hand quotation marks which assumes the namespace, scope operator, cout object
*are all part of the comment (it ignores the line break in the middle) untl the next quotation
*mark.  This breaks the second line of code.
*/
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;


    return 0;
}