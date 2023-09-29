#include<iostream>
using namespace std;

class GfG
{
    public:
      static void printmsg()
      {
        cout << "Welcome to GFG ";
      }
};
int main()
{
    GfG::printmsg();
}