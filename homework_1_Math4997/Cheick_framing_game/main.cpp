
// Copyright (c) 2019 Cheick Bamba
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
// framing
//This program as for name and output a framed name
#include <iostream>
#include <string>

void frame() {
  std::string b = " ";
  std::string name;
  std::cout << "Please enter your first name!" << std::endl;
  std::cin >> name;
  // building the greeting message
  const std::string greeting = b + "Hello," + name + "!" + b;
  // building the second and the fourth line of the output
  const std::string spaces(greeting.size(), ' ');
  const std::string second = "*" + spaces + "*";
  // building the first line
  const std::string first(second.size(), '*');
  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "*" << greeting << "*" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;
}
int main() { frame(); }