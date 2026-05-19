#include <iostream>
using namespace std;

class baseClass{
  public:
        virtual void perkenalan(){
          cout << "hallo saya function dari base class";
        }
};

class derivedClass : public baseClass {
  public:
        void perkenalan1() {
          cout << "halo saya function dari derived class";
        }
};

int main() {
  derivedClass a;
  a.perkenalan1();
  
  return 0;
}