#include <iostream>
#include "funcs.h"

int main(){
    //Task A
    std::cout << "Print Range: ";
    std::cout << printRange(-2,10);
    std::cout << "\n-----------\n";

    //Task B
    std::cout << "sum of range: ";
    int x = sumRange(1, 3);
    int y = sumRange(-2, 10);
    std::cout << x << " " << y;
    std::cout << "\n------------\n";

    //Task C
    std::cout << "sum array: \n";
    int *arr = new int[10];
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    std::cout << sumArray(arr,10) << "\n"; //43
    std::cout << sumArray(arr, 5) << "\n"; // sum of first 5, 34
    std::cout << "-----------------\n";

    //Task D
    std::cout << "Is alpha: ";
    std::cout << isAlphanumeric("hello@123") << "\n";
    std::cout << isAlphanumeric("hello123") << "\n";

    //Task E
    std::cout << "Nested Parens: ";
    std::cout << nestedParens("()()") << "\n";
    std::cout << nestedParens("(())") << "\n";

    return 0;
}