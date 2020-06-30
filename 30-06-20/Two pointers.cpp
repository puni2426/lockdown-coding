#include <iostream>

using namespace std;

int main()
{
    int m,n,i,j,mDiag=0,secDiag=0;
   cout << "Enter the size of m and n" << endl;
   cin>>m>>n;
   int mat[m][n];
   cout<<"Enter the elements of the matrix"<<endl;
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
            cin>>mat[i][j];
       }
       cout<<"\n";
   }
   cout<<"The matrix elements are"<<endl;
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
            cout<<mat[i][j]<<"\t";
       }
       cout<<"\n";
   }
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
               mDiag=mDiag+mat[i][j];
           
           }
       }
   }
   cout<<"The sum Main diagonal is="<<mDiag<<endl;
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i+j==(n-1))
           {
               secDiag=secDiag+mat[i][j];
           
           }
       }
   }
    cout<<"The sum secondary diagonal is="<<secDiag<<endl;
   return 0;
}
