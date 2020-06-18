/*Write a C Program to generate first N Magic Numbers.
*/
#include<stdio.h>
int nthMagicNo(int n) 
{ 
	int pow = 1, answer = 0; 
	while (n) 
	{ 
	pow = pow*5; 
	if (n & 1) 
		answer += pow; 
	printf("%d ",pow);
	n >>= 1; 
	} 
 
} 
int main() 
{ 
    printf("Input: n = 1\n");
    printf("output: ");
	nthMagicNo(1); 
	printf("\nInput: n = 2\n");
    printf("output: ");
	nthMagicNo(2); 
	printf("\nInput: n = 3\n");
    printf("output: ");
	nthMagicNo(3); 
	printf("\nInput: n = 8\n");
    printf("output: ");
	nthMagicNo(8); 
	return 0; 
}
