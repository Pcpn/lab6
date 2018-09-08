#include<iostream>
using namespace std;
//write a program that includes sum, maximum and minimum
//finding sum
int func1(int a,int b){
int c=a+b;
return c;
}
//finding maximum
int func2(int a, int b){
if(a>b){
 return a;
  }
else 
  return b;
}
//finding minimum
int func3(int a, int b){
if(a<b){
 return a;
  }
else 
  return b;
}
//write a main function that asks the user to input 2 variables and what operation he wants to do and accordingly display the output
int main(){
int a,b,i;
cout<<"Enter 2 numbers: "<<endl;
cin>>a>>b;
cout<<"to find sum press 1"<<endl;
cout<<"to find maximum press 2"<<endl;
cout<<"to find minimum press 3"<<endl;
//output
cin>>i;
if(i==1)
{
cout<<"sum is:"<<func1(a,b)<<endl;
}
else if(i==2)
{
cout<<"maximum number is:"<<func2(a,b)<<endl;
}
else if(i==3)
{
cout<<"minimum number is:"<<func3(a,b)<<endl;
}
else
cout<<"invalid input";
return 0;
}

