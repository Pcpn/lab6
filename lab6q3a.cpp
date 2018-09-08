#include<iostream>
using namespace std;

//Write a program with a function that takes two int parameters, finds the maximum then returns the maximum.

int func1(int a, int b){
    if(a>b){
    return  a;
     }
    else 
    return b;
    }
//the program shoud ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
    int main(){
    int a, b, y;
    cout << " Enter two numbers : ";
    cin>>a>>b;
    
    y = func1(a, b); // y = f(x)
    cout << " The maximum number is : " << y << endl;
 }

