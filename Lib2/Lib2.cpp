#include "Lib2.hpp"

#include "Lib1.h"

#include <iostream>

Lib2::Lib2()
{
  std::cout << "Constructing a Lib2" << std::endl;
}

Lib2::~Lib2()
{
  std::cout << "Destroying a Lib2" << std::endl;
}

void Lib2::operator()(int param)
{
  std::cout << "Lib2 operating on " << param
	    << " will Lib1(" << param* 2 << ")" << std::endl;
  Lib1(param * 2);
};
