#include<iostream>
#include<string>

int main()
{
  std::cout << "Enter your name: ";
  std::string name;
  std::getline(std::cin, name);
  std::cout << "Welcome " << name << std::endl;

  if(name == "Hello World")
  {
    std::cout << "are you new to programming!" << std::endl;
  }else
  {
    std::cout << "There we go!" << std::endl;
  }
  
return 0;
}
