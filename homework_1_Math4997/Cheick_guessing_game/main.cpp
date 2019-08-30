
//Copyright (c) 2019 Cheick Bamba
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//Cheick Oumar Bamba
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <set>

int main() {
  std::srand(std::time(0)); // use current time as seed for random generator
  int random_variable = std::rand();
  std::set<int> m;
  int a;
  int b = 50;

  do {
    std::cout << "Please guess an integer number to match the secret:";
    std::cin >> a;

    if (a > b) {
      std::cout << "Your guess est more than the secret\n";
      m.insert(a);
    } else if (a < b) {
      std::cout << "Your guess is less than the secret\n";
      m.insert(a);
    } else {
      std::cout << "Congratulations\n";
    }
  } while (a != b);

  std::cout << "your number of attempt is " << m.size() + 1 << std::endl;
  return 0;
}
