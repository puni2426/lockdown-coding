/*Write a C Program to rotate a Matrix by 90 Degree in Clockwise or Anticlockwise Direction
*/
#include <stdio.h> 
int main()
{   
 int c,l=1,n;
   printf("Enter size of matrix (NxN): ");
  scanf("%d",&n);
  int arr[n][n];
  printf("\nEnter matrix elements:\n");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
  printf("\ngiven matrix elements:\n");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("%d ",arr[i][j]);
      }
      printf("\n");
  }

 
 while(l)
 {
     printf("MENU\n");
     printf("1.clockwise\n");
     printf("2.Anticlockwise\n");
     printf("3.display\n");
     printf("4.exit\n");
     printf("enter choice\n");
     scanf("%d",&c);
    
     {
         if(c==1){
           for (int i=0;i<n/2;i++) 
  { 
    for (int j=i;j<n-i-1;j++) 
    { 
            int temp=arr[i][j]; 
            arr[i][j]=arr[n-1-j][i]; 
            arr[n-1-j][i]=arr[n-1-i][n-1-j]; 
            arr[n-1-i][n-1-j]=arr[j][n-1-i]; 
            arr[j][n-1-i]=temp; 
    } 
  }
         }
     else if(c==2){
            for(int i=0;i<n/2;i++)
  {
      for(int j=i;j<n-i-1;j++)
      {
        
          int temp=arr[i][j];
          arr[i][j]=arr[j][n-i-1];
          arr[j][n-i-1]=arr[n-i-1][n-j-1];
          arr[n-i-1][n-j-1]=arr[n-j-1][i];
          arr[n-j-1][i]=temp;
      }
  }
    
          
      }
     else if(c==3)
      {
            printf("\nMatrix after rotating 90 degree:\n");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("%d ",arr[i][j]);
      }
      printf("\n");
  }

      }
      else l=0;
     
     }

     }
 }
