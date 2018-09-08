#include<iostream>
using namespace std;

//Write a program with a function that takes two int parameters, finds the minimum then returns the minimum.

int func1(int a, int b){
    if(a>b){
    return  b;
     }
    else 
    return a;
    }
// using void , the function that finds the minimum should be void, and takes a third, pass by refernce  parameters; then puts the minimum in that.

void func2( int a, int b, int &c ) {
  c = func1(a,b);
  // return a;
}
 
//the program shoud ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
    int main(){
    int a, b, y;
    cout << " Enter two numbers : ";
    cin>>a>>b;
    
    y = func1(a, b); // y = f(x)
    cout << " The minimum number is : " << y << endl;
 }

