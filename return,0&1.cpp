#include<iostream>
using namespace std;
int checkadultutil( int age)
{
    if(age >= 18)
      return 1;
    else
      return 0;  
}

void checkadult(int age)
{
    if(checkadultutil(age))
     cout <<"you are adult\n";
    else 
      cout <<"you are not adult\n"; 
    
}
int main()
{
    int age = 17;
    checkadult(age);
    return 0;
}