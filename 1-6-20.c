/*Given an array of positive integers. Write a C Program to find the leaders in the array.*/
#include<stdio.h> 
void printLeaders(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
	{ 
		int j; 
		for (j = i+1; j < size; j++) 
		{ 
			if (arr[i] <= arr[j]) 
				break; 
		}	 
		if (j == size) 
			printf("%d\n",arr[i]); 
} 
} 
int main() 
{ 
	int arr[100];
	int n,t;
	printf("enter num of test cases\n");
	scanf("%d",&t);
	while(t--)
	{
	printf("\nN=");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("leadersin array\n");
	printLeaders(arr, n); 
	}
	return 0; 
}
