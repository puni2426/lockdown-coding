/*Write a C Program to rotate the matrix by K times. */
#include<stdio.h>
int main() { 
  int matrix[100][100],M,N,k;
  printf("Enter size of matrix\n");
  scanf("%d%d",&M,&N);
  printf("Enter the matrix elements\n");
   for( int i = 0 ; i < M ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            scanf("%d",&matrix[i][j]); // Input the matrix elements
        }
        
    }
    printf("Enter k value\n");
    scanf("%d",&k);
    int temp[M]; 
  k = k % M; 
  for (int i = 0; i < N; i++) { 
    for (int t = 0; t < M - k; t++) 
      temp[t] = matrix[i][t]; 
    for (int j = M - k; j < M; j++) 
      matrix[i][j - M + k] = matrix[i][j]; 
      for (int j = k; j < M; j++) 
      matrix[i][j] = temp[j - k]; 

    printf("The rotated matrix is\n");
    
   for (int i=0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ",matrix[i][j]);
        }
       printf("\n");
    }
    
    }
    
  return 0; 
}
