Write a c program to solve a system of linear congruences by applying the Chinese Remainder Theorem.
#include<stdio.h> 
int findMinX(int num[], int rem[], int k) 
{ 
           int x = 1; 
	while (1) 
	{ 
                                Int  j; 
		for (j=0; j<k; j++ ) 
			if (x%num[j] != rem[j]) 
			break; 
		if (j == k) 
			return x; 
		x++; 
	}
 	return x; 
} 

int  main(void) 
{ 
	int num[100]; 
	int rem[100]; 
	int k; 
	printf("Enter k value\n");
	scanf("%d",&k);
	printf("enter numbers\n");
	for(int i=0;i<k;i++)
	scanf("%d",&num[i]);
	printf("enter remainders\n");
	for(int i=0;i<k;i++)
	scanf("%d",&rem[i]);
          printf("output=%d",findMinX(num, rem, k)); 
	return 0; 
}
