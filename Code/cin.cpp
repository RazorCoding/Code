#include <cinttypes>
#include <csignal>
#include <cstddef>
#include<iostream>

std::string name;

int main()
{
  std::cout << "Enter your name: ";
  std::getline(std::cin,name);

  while(name.empty())
  {
    std::cout << "Enter your name: ";
    std::getline(std::cin,name);
  }
  std::cout << "Welcome to C++ " << name << std::endl;
  return 0;
}
