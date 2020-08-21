/*
Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.
Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’

Example 1:

Input:
str1 = aab
str2 = xxy
Output: 1
Explanation: There are two different
charactersin aab and xxy, i.e a and b
with frequency 2and 1 respectively.
Example 2:

Input:
str1 = aab
str2 = xyz
Output:
Explanation: There are two different
charactersin aab but there are three
different charactersin xyz. So there
won't be one to one mapping between
str1 and str2.
Your Task:
The task is to complete the function areIsomorphic() which checks if two strings are isomorphic. The function returns true if strings are isomorphic else it returns false.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of different characters).
Note: N = |str1|.

Constraints:
1 <= Length of Strings <= 103 
 */


#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        cout<<areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}// } Driver Code Ends


// This function returns true if str1 and str2 are ismorphic
// else returns false
bool areIsomorphic(string s1, string s2)
{
    if(s1.length()!=s2.length())
    return false;
    int hash1[256] = {0}; int hash2[256]={0};
    
    for(int i=0; i<s1.length(); i++){
    if(hash1[s1[i]]==0&&hash2[s2[i]]==0){//means intially both string didn't visited
        hash1[s1[i]]=(int)s2[i];
        hash2[s2[i]]=(int)s1[i];
    }
    else
    if(hash1[s1[i]]!=(int)s2[i]&&hash2[s2[i]]!=(int)s1[i])
    return false;
    }
    return true;
}

