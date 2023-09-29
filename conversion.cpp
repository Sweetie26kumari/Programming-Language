#include<iostream>
using namespace std;
void fun(int);
void fun(double);
void fun(int i)
{
    cout << "value of i is :"<< i << endl;
}
void fun(double j)
{
    cout << " value of j is :"<< j << endl;
}
int main()
{
    fun(12);
    fun(1.2);
    return 0;
}