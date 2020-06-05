/*
 Print numbers from 1 to N without the help of loops.

Input: 
The first line of the input contains T, denoting the number of testcases. First line of test case contains an integer N.

Output: 
For each test case, print numbers from 1 to N in newline.

Your Task:
This is a function problem. You only need to complete the function printNos that takes N as parameter and prints number from 1 to N recursively. The driver code adds the newline automatically after the function call.

Constraints:
1 <= T <= 100
1 <= N <= 990

Example:
Input:
2
10
5
Output:
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5

Explanation:
Testcase 1: Print all the numbers from 1 to 10
Testcase 2: Print all the numbers from 1 to 5. 
 */

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void printNos(int N);
/* Driver program to test printNos */
int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int N;
        cin>>N;
        printNos(N);
        
        cout<<endl;
    }
    return 0;
}// } Driver Code Ends


//Complete this function

void printNos(int N)
{
  if(N==1)
  cout<<N<<" ";
  else{
      printNos(N-1);
      cout<<N<<" ";
  }
}


