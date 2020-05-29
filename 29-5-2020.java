/*Java Program to find longest substring without repeating characters in a string.*/
packagefriday; 
importjava.util.LinkedHashMap;
publicclassMainClass
{  
staticvoidlongestSubstring(String inputString)
    {

char[] charArray = inputString.toCharArray();

        String longestSubstring = null;

intlongestSubstringLength = 0;



LinkedHashMap<Character, Integer>charPosMap = newLinkedHashMap<Character, Integer>();



for (inti = 0; i<charArray.length; i++) 
        {
charch = charArray[i];



if(!charPosMap.containsKey(ch))
            {
charPosMap.put(ch, i);
            }



else
            {   
i = charPosMap.get(ch);

charPosMap.clear();
            }



if(charPosMap.size() >longestSubstringLength)
            {
longestSubstringLength = charPosMap.size();

longestSubstring = charPosMap.keySet().toString();
            }
        }

System.out.println("Input String : "+inputString);

System.out.println("The longest substring : "+longestSubstring);

System.out.println("The longest Substring Length : "+longestSubstringLength);
    }

publicstaticvoid main(String[] args) 
    {   
longestSubstring("javaconceptoftheday");

System.out.println("==========================");

longestSubstring("thelongestsubstring");
    }   
}
