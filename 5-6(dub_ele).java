/*Dublicate element*/
import java.util.Scanner;
import java.util.*;

public class DuplicateCharacters 
{  
     public static void main(String[] args) 
     {  
        Scanner sc= new Scanner(System.in);   
        System.out.print("Enter a string: ");  
        String str= sc.nextLine();              
        System.out.println("You have entered: "+str);    
        int count;  
          
         
        char string[] = str.toCharArray();  
          
        System.out.println("Duplicate characters in a given string: ");  
      
        for(int i = 0; i <string.length; i++) {  
            count = 1;  
            for(int j = i+1; j <string.length; j++) {  
                if(string[i] == string[j] && string[i] != ' ') {  
                    count++;  
              
                    string[j] = '0';  
                }  
            }  

            if(count > 1 && string[i] != '0')  
                System.out.println(string[i]);  
        }  
    }  
}  
