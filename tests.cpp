#include <iostream>
#include "funcs.h"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Print Range"){ // A
    CHECK(printRange(-2,10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(10,15) == "10 11 12 13 14 15");
}

TEST_CASE("sum Range"){ // B
    CHECK(sumRange(1,3) == 6);
    CHECK(sumRange(-2,10) == 52);
}

TEST_CASE("sum array"){ // C
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
    CHECK(sumArray(arr,10) == 43);
    CHECK(sumArray(arr,5) == 34);
}

TEST_CASE("Is Alphanumeric"){ // D
    CHECK(isAlphanumeric("hello@123") == false);
    CHECK(isAlphanumeric("hello123") == true);
}

TEST_CASE("Nested Parenthesis"){ // E
    CHECK(nestedParens("()()") == false);
    CHECK(nestedParens("((()))") == true);
    CHECK(nestedParens(")()(") == false);
}