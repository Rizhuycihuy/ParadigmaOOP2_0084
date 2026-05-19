#include <iostream>
using namespace std;

class baseClass final{
  public:
        virtual void perkenalan(){
          cout << "hallo saya function dari base class";
        }
};

class baseClass1 {
  public:
        virtual void perkenalan() {
          cout << "halo saya function dari base class";
        }
};

class derivedClass : public baseClass1 {
  public:
        void perkenalan() {
          cout << "halo saya function dari derived class";
        }
};

int main() {
  derivedClass a;
  a.perkenalan();
  a.perkenalan();
  return 0;
}