#include<iostream>
#include<string>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
      std::cout << argv[0] << " TEXT" << std::endl;
    }else
    {
      for(int i=0;i< std::sizeof(argv) / std::sizeof(argv[0]) ;i++)
      std::cout << *argv++ << std::endl;
    }
    for(int i=0;i<3;i++)
    {
      msg("Hello World!");
    }
return 0;
}

void print(std::string msg)
{
  std::cout << msg << std::endl;
}
