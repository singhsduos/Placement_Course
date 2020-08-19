/*
Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.
Your Task:
The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |s|

Constraints:
1 ≤ |s| ≤ 100
 */


#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}// } Driver Code Ends


// Function to get maximum occuring 
// character in given string str
char getMaxOccuringChar(char* str) 
{ 
    // Create array to keep the count of individual 
    // characters and initialize the array as 0 
    
    int count[256] = {0}; //Typically, ASCII characters are 256, so we use our Hash array size as 256
  
     // Construct character count array from the input 
    // string. 
    
    int len = strlen(str); 
    int max = 0;  // Initialize max count 
    char result;   // Initialize result 
  
    // Traversing through the string and maintaining 
    // the count of each character 
    for (int i = 0; i < len; i++) { 
        count[str[i]]++;
        
    }
    

   
    
    for(int i =0; i<256;i++){
        if(max<count[i]){
        max = count[i];
        result = i;
        }
    }
    return result; 
} 
  


