/*Inversion count*/


#include <stdio.h> 
int getInvCount(int arr[], int n) 
{ 
	int inv_count = 0; 
	for (int i = 0; i < n - 1; i++) 
		for (int j = i + 1; j < n; j++) 
			if (arr[i] > arr[j]) 
				inv_count++; 

	return inv_count; 
} 

int main() 
{ 
	int arr[100]; 
	int n,t;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf(" Number of inversions are %d \n", getInvCount(arr, n)); 
	return 0; 
}
