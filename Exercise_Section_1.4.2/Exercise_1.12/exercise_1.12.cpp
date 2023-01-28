#include <iostream>

int main() {

/*initialised at -100 and condition statement at 100
*the for loop will trigger 200 times.
*with sum initialised to 0, 0 + 200 = 200;
*expression states i will increment by 1 each iteration of loop
*sum will total 200 when condition statement is met
*/
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;

    return 0;
}