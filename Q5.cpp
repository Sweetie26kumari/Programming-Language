#include<iostream>
using namespace std;
 //there is a variables with same name
 int x = 0;//global variable

 int main()
 {
   int x=10;//local variable
   cout<<"value of global x is :"<< ::x ;//scope resolution operator
   cout<<"\n value of local x is :"<< x;
   return 0;
 }