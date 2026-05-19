#include <iostream>
using namespace std;

class orang {
  public:
        int umur;
        
        orang(int pUmur) :
            umur(pUmur)
        {
          cout << "orang di buat dengan umur" << umur<< "\n" << endl;
        }
};

