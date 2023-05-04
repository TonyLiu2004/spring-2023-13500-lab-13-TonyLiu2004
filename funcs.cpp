#include <iostream>
#include "funcs.h"
using namespace std;

//Prints all numbers from range left to right
string printRange(int left, int right){
    string ret = "";
    if(left <= right){
        ret += to_string(left) + " " + printRange(left+1,right);
    }
    return ret;
}

//computes the sum of all numbers in range
int sumRange(int left, int right){
    if(left > right){ // base case
        return 0;
    }
    return left + sumRange(left+1,right);
}

//returns the sum of array arr
int sumArray(int *arr, int size){
    if(size<1){
        return 0;
    }
    return arr[size-1] + sumArray(arr,size-1);
}

//returns true if the string is alphanumeric
bool isAlphanumeric(string s){
    if(s.length() > 0){
        if(iswalnum(s[0])){
            if(!isAlphanumeric(s.substr(1,s.length()-1))){
                return false;
            }
        }else{
            return false;
        }
    }
    return true;
}

//returns true if the string is a nested parenthesis
bool nestedParens(string s){
    if(s == ""){ // base case
        return true;
    }
    string left = s.substr(0,1); // left-most character
    string right = s.substr(s.length()-1,1); // right-most character
    
    //recursion checks the original string minus the left and right-most characters.
    //the recursion will return true if left is always ( and right is always ) this means that the string is a nested parenthesis.
    if((left == "(") && (right == ")") && (nestedParens(s.substr(1,s.length()-2)))){
        return true;
    }
    return false;
}