#include<iostream>
using namespace std;

class GFG
{
    public:
      static int i;
      GFG(){

      };
};
int GFG::i = 1;
 
 int main()
 {
    GFG obj;
    cout << obj.i;
 }