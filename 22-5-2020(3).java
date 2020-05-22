Write a Java Program to separate the Individual Characters from a String

Description:
In computer science, collection of characters including spaces is called as string. To separate an individual character from the string, individual characters are accessed through its index.

Algorithm
STEP 1: START
STEP 2: DEFINE String string = "characters "
STEP 3: PRINT "Individual characters from given string: "
STEP 4: SET i=0. REPEAT STEP 5 to STEP 6 UNTIL i<string.length()
STEP 5: PRINT string.charAt(i)
STEP 6: i=i+1
STEP 7: END


CODE
package sor;
import java.io.BufferedReader;
import java.io.InputStreamReader;
 

public class LargestAndSmallestWord {
	static void printLargestAndSmallestWord(String str){
        String[] arr=str.split(" ");
        int i=0;
        int maxlength,minlength;
        maxlength=Integer.MIN_VALUE;
        minlength=Integer.MAX_VALUE;
        String largest,smallest;
        largest = smallest = "";
        for(i=0;i<arr.length;i++){
            if(arr[i].length() < minlength){
                smallest=arr[i];
                minlength=arr[i].length();
            } 
            if(arr[i].length() > maxlength) {
                largest=arr[i];
                maxlength=arr[i].length();
            }
        }
        System.out.println("The largest and smallest word is \"" + largest +
                                               "\" and \"" + smallest + "\"");
    }
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the text string");
        String str;
        try{
            str=br.readLine();
        }
        catch(Exception e){
            System.out.println("Error reading input");
            return;
        }
        printLargestAndSmallestWord(str);
    }
}
