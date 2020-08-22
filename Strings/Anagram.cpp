/*
 Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.

Example 1:

Input:
a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same
characters with same frequency. So, 
both are anagrams.
Example 2:

Input:
a = allergy, b = allergic
Output: NO
Explanation:Characters in both the strings
are not same, so they are not anagrams.
Your Task:
The task is to complete the function isAnagram() which checks if the two strings are an anagram of each other. The function returns true if the strings are anagram else it returns false.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).

Constraints:
1 ≤ |s| ≤ 105 
 */

#include <bits/stdc++.h>
using namespace std;

/*  Function to check if two strings are anagram
*   c, d: input string
*/


//method 1: sorting
bool isAnagram(string c, string d){
sort(c.begin(),c.end());
sort(d.begin(),d.end());
if(c==d)
return true;
else
return false;
    
}


//method 2: Count characters
bool isAnagram(string c, string d){

    // an array of size 26, to store count of characters
    int a[26] = {0};
    
    // storing count of characters in first string
    /// by incrementing the value corresponding to the 
    // array index equal to character number in alphabet(0-25)
    for(int i = 0;i<c.length();i++){
        a[c[i]-'a']++;
    }

        // decrementing the count of characters whenever encountered
        // in the second string
        for(int i = 0; i<d.length();i++){
            a[d[i]-'a']--;
        }
        
        // iterating over the array in which we stored count
        // to check if count at every index is equal to 0 or not.
        // Count 0 indicates that number of characters in c and d
        // both are same
        for(int i = 0;i<26;i++){
            if(a[i] != 0){
                return false;
             
            }
        }

        return true;
}



int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
 

