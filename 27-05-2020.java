/*Given an array of the positive integers of size N, the task is to find the largest element on the left side of each index which is smaller than the element present at that index. Note: If no such element is found then print -1.
*/
import java.util.*;
public class Array{
     public static void main(String []args){
         Scanner s=new Scanner(System.in);
         System.out.print("Enter the no. of elements: ");
         int n=s.nextInt();
         int a[]=new int[20];
         System.out.print("Enter the elements into array: ");
         for(int i=0;i<n;i++)
         {
             a[i]=s.nextInt();
         }
         int b[]=new int[20];
         int k=0;
         b[k++]=1;
         for(int i=1;i<n;i++)
         {
             int max=a[0];
             for(int j=0;j<i;j++)
             {
                 if(a[j]<a[i])
                 {
                     if(max<a[j])
                     {
                         max=a[j];
                     }
                 }
             }
             b[k++]=max;
         }
         for(int i=0;i<k;i++)
         {
             System.out.print(b[i]+" ");
         }
     }
}
