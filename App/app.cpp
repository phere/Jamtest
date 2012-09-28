#include <iostream>

#include "Subclass.hpp"

using namespace std;

int main ()
{
  cout << __FILE__ << " main()" << endl;
  Subclass sub(3);
  sub(4);
  return 0;
}
