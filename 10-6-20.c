/*Write a C Program to print the sum of boundary elements of a matrix.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100],m,n,i,j;
printf("Enter The Size Of The Matrix:\n");
scanf("%d%d",&m,&n);
printf("Enter The Elements Into Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
scanf("%d",&a[i][j]);
        }
    }
    int f,g;
printf("The Input Matrix Is:\n");
    for(f=0;f<m;f++)
    {
        for(g=0;g<n;g++)
        {
printf("%d\t",a[f][g]);
        }
printf("\n");
    }
printf("The Boundary Elements Are:\n");
    int b,c,s=0;
    for(b=0;b<m;b++)
    {
        for(c=0;c<n;c++)
        {
if(b==0 || b==m-1)
            {
                s=s+a[b][c];
printf("%d\t",a[b][c]);
            }
            else if(c==0 || c==n-1)
            {
                s=s+a[b][c];
printf("%d\t",a[b][c]);
            }
        }
    }
printf("\nThe Sum Of The Boundary Elements Of The Matrix Is:\n%d",s);
}
