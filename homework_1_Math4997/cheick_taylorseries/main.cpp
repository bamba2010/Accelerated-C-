// Copyright (c) 2019 Cheick Bamba
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <cmath>
#include <cstdio>
#include <iostream>

// This function returns the factorial of any given positive n
unsigned long int  factorial(int n) {
  unsigned long fact = 1;

  if (n == 0) {
    return 1;
  } else {
    for (int i = 1; i <= n; i++) {
      fact = i * fact;
    }
    return fact;
  }
}
int main()
{
  double degre;
  unsigned int n;
  double long sin = 0;
  double em;
  std::cout << "enter an angle in degree:";
  std::cin >> degre;
  std::cout << "Enter an integer:";
  std::cin >> n;
  double const Pi = 3.14159265358979323846;
  double long  x = (Pi*degre/180) ;
  double long a, b, c;
  for (int i = 0; i <= n; i++) {
    a = pow(-1, n);
    b = pow(x, 2 * i + 1);
    c = factorial(2 * i + 1);
    sin = sin + a * b / c;
    em = (std::sin(x) - sin);
    if (std::abs(em)<=pow(10, -5)) {
      std::cout <<"The first n for which error is less that 10^-5 is "<< i << std::endl;

    }
    break;
  }

  std::cout << "The taylor series of sine at a point x = "<<degre<< " "<<"is" << " " <<sin << std::endl;
  std::cout<< "the build in function of the math library sine of x is "<< std::sin(x)<<std::endl;
  std::cout << "The error is "<< std::abs(em) << std::endl;
  return 0;
}