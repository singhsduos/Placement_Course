/*
You are given a string s. You need to find the missing characters in the string to make a panagram.
Note: The output characters will be lowercase and lexicographically sorted.

Input Format: The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing s.

Output Format: For each testcase, in a new line, print -1 if the string is already a panagram, else print the missing characters.

Your Task: This is a function problem. You only need to complete the function misssingPanagram that takes s as parameter and returns -1 if the string is a panagram, else it returns a string that consists missing characters. The newline is provided by the driver code.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 100

Sample Input:
2
Abcdefghijklmnopqrstuvwxy
Abc
Sample Output:
z
defghijklmnopqrstuvwxyz

Explanation:
Testcase 1: Here all the characters from a to z are present except z.
 
 */


#include<bits/stdc++.h>
using namespace std;

// A panagram is a string with every letter in the english alphabet present in the string

string missingPanagram(string str);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << missingPanagram(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++


string missingPanagram(string str){
bool arr[26] = {false};
for(int i=0; i<str.length(); i++){
    if(str[i]>='A' && str[i]<='Z'){
        arr[str[i]-'A']=true;
    }
    else{
        arr[str[i]-'a']=true;
    }
  }
  // return a string with missing characters in the input string
    // characters are sorted in lexicographical order

   string result = "";
   for(int i=0;i<26;i++){
       if(arr[i]==false){
           result+=(i+'a');
       }
   }
   return result;

}


