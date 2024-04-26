#include<iostream>

void print(std::string str)
{
  std::cout << dynamic_cast<char>(str) << std::endl;
}
int main()
{
  print("Hello World!");
}
