#include<iostream>
using namespace std;

int staticfun()
{
    cout << "for static variable: ";
    static int count = 0;
    count++;
    return count;
}

int nonstaticfun()
{
    cout << "For non static variable: ";
    int count = 0;
    count ++;
    return count;
}

int main()
{
    cout << staticfun() << "\n";
    cout << staticfun() << "\n";
    cout << staticfun() << "\n";
    cout<< nonstaticfun() << "\n";
    cout<< nonstaticfun() << "\n";
    

    return 0;
}