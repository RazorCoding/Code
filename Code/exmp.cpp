#include<iostream>

void line(int);
bool Check(int [],int *&,int );
bool RandFun(int [], int);
bool Fun(int *);

// Check
bool Check(int arr[], int *&ptr, int size){
	for(int i=0;i<size;i++)
	{
		if(arr[i] == 10)
		{
			line(40);
			std::cout <<  "[FOUND] -> ELEMENT:  " << i << " Value: "  << arr[i] << std::endl;
			std::cout << "SETTING POINTER TO ELEMENT NUMBER -> " << i << std::endl;
			line(40);
			ptr = &arr[i];
		}
		/*else
		{
			std::cout << "!NOT ELEMENT" << i << " " << arr[i] << std::endl;
		}*/
	}
	return true;
}
// Starline Print
void line(int x)
{
	for(int i=0;i<x;i++)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
}

bool RandFun(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		arr[i] = i;
	}
return true;
}

bool Fun(int *ptr)
{
	static bool Flag = false;
	if(ptr != nullptr)
	{
		std::cout << "Pointer Has The Value.[Pointing]" << std::endl;
		Flag = true;
	}else if (ptr == nullptr)
	{
		std::cout << "Pointer Has No Value.[Not Pointing]" << std::endl;
		Flag = false;
	}
return Flag;
}
// Main Function
int main()
{
	bool check = false;
	// Okay lets start the ...
	int arr[100]; // Data variable
	int *ptr = nullptr;
	int size = sizeof(arr)/sizeof(arr[0]);
	check = Fun(ptr);
	RandFun(arr,size);
	Check(arr,ptr,size);
	check = Fun(ptr);
	if(!check)
	{
		std::cout << "The Function Returns [False]" << std::endl;
	}else if(check)
	{
		std::cout << "The Function Returns [True]" << std::endl;
	}
return 0;
}
