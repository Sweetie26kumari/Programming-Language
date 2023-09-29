#include<iostream>
using namespace std;

int x;
void externstorageclass()
{
    cout<<"Demostrating extern class\n";
    extern int x;
    cout << "Value of the variable 'x'"<< "declared as extern: "<< x << "\n";
    x=2;
    cout << "Modified value of the variable 'x' "<< "declared as extern: \n"<< x;
}

int main()
{
    externstorageclass();
    return 0;
}