#include "Subclass.hpp"

#include <iostream>

using namespace std;

Subclass::Subclass(int param)
{
  cout << "Subclass::Subclass(" << param << ")" << endl;
  operator ()(param);
}
