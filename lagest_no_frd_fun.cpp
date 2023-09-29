#include<iostream>
using namespace std;
class largest
{
    int a,b,m;
    public :
    void set_data();
    friend void find_max(largest); 
};
void largest::set_data()
{
    cout<<"enter the 1st no.:";
    cin>>a;
    cout<<"enter the 2nd no.:";
    cin>>b;
}
void find_max(largest t)
{
    if(t.a>t.b)
      t.m=t.a;
    else
      t.m=t.b;
    cout<<"maximum n0. is \t"<< t.m;    
}
main()
{
    largest l;
    l.set_data();
    find_max(l);
    return 0;
}