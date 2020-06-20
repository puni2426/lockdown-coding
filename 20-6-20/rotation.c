/*Write a C Program to rotate an array by K positions.
*/
#include <stdio.h>
int main() {
   int arr[100];
   int i, N, len, j;
   printf("enter n value\n");
   scanf("%d",&len);
   printf("enter array elements\n");
   for(i=0;i<len;i++)
   scanf("%d",&arr[i]);
   printf("enter num rotation \n");
   scanf("%d",&N);
   int temp=0;
   for (i = 0; i < N; i++) {
      int x = arr[0];
      for (j = 0; j < len; j++) {
         temp=arr[j];
         arr[j] = arr[j + 1];
         arr[j+1]=temp;
      }
      arr[len - 1] = x;
   }
   for (i = 0; i < len; i++) {
     printf("element at %d index : %d\n",i,arr[i]);
   }
}
