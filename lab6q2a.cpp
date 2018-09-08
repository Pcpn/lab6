#include<iostream>
using namespace std;

// Write a program with a function thaat takes two int parameters, adds them together, then returns the sum.


    int func1(int a, int b){
    int sum = a + b;
    return sum;
}

// The program shoukd ask the user for the two numbers, then call the function with the numbers as arguments, and tell the user the sum. 
 
    int main(){
     int a, b, y;
     cout << " Enter two numbers : ";
     cin >> a >> b;
    y = func1(a,b); // y = f(x)
     cout << y << endl;
}
