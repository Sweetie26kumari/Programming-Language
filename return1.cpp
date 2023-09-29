#include<iostream>
using namespace std;

int sum(int a, int  b)
{
    int s1= a + b;
    
    return s1;
}
int main()
{
    int num1=10;
    int num2=20;
    int add = sum(num1,num2);//function call //value of a & b came to num1 & num2
    cout<<"sum of a and b :"<< add << endl;
    return 0;

}