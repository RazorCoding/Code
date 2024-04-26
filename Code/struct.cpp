#include<iostream>
#include<string>

// Struct
struct info
{
    std::string name;
    int ID=0;
};
struct info Inform();
// Fucntions def
void starline(int);
// Main Function
int main()
{
  struct info e;
  e = Inform();
  std::cout << "Name: " << e.name << " " << "ID: " << e.ID << std::endl;
}

void starline(int y)
{
  for(int i=0;i<=y;i++)
  {
    std::cout << "*";
  }
  std::cout << std::endl;
}

struct info Inform()
{
  struct info I;
  std::cout << "Enter your name: ";
  std::getline(std::cin,I.name);
  std::cout << "Enter your ID: ";
  std::cin >> I.ID;
  return I;
}
