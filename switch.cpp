#include<iostream>
using namespace std;

int main()
{
    int var = 2;
    switch (var){
      case 1:
        cout<< "case 1 is executed";
        break;
      case 2:
        cout<< "case 2 is executed";
        break;
      default:
        cout << "default case is executed";
        break;    
    }
    return 0;
}