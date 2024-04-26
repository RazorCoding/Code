#include<iostream>
#include<string>

int main()
{
	char *name = "Hello World!";
	char len;
	int count = 0;
	while(len = *name++)
	{
		count++;
	}
	std::cout << count << std::endl;
return 0;
}
