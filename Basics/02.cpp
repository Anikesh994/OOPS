/*Given two integers x and y, find their sum using pointers.
 */

#include <iostream>
int main()
{
    int *x =new int{2};
    int *y = new int{3};
    std::cout << "Their sum = " << (*x+*y) << "\n";

    delete x;
    x=nullptr;
    delete y;
    y=nullptr;
    return 0;
}