/*Write a C++ program to find the sum of 2 integers using Pointers*/
#include <iostream>
using namespace std;

int main()
{
	int *pNum1=new int;
	int *pNum2=new int;
	int *pAdd=new int;
	
	
	cout<<"Enter first number: ";
	cin>>(*pNum1);
	cout<<"Enter second number: ";
	cin>>(*pNum2);
	
	
	*pAdd=*pNum1+*pNum2;
	
	
	cout<<"Addition is: "<<*pAdd<<endl;
	
	return 0;
}
