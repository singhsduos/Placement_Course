/*
 Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.​
The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains 2 integers n and k .

Output:
For each test case, in a new line, output will be the safe position which satisfies the above condition.

Your Task:
This is a function problem. You are required to complete the function josephus () that takes two parameters n and k and returns an integer denoting safe position. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= T <= 100
1 <= k, n <= 20

Example:
Input:
2
3 2
5 3
Output:
3
4

Explanation:
Testcase 1: There are 3 persons so skipping 1 person i.e 1st person 2nd person will be killed. Thus the safe position is 3.
Testcase 2: There are 5 persons so skipping 2 person i.e 3rd person will be killed. Thus the safe position is 4.


*/


#include <bits/stdc++.h>
using namespace std;


int josephus(int n, int k);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int josephus(int n, int k)
{
 if(n==1) {
     return 1;
 }
 else{
     return (josephus(n-1,k)+k-1)%n+1;
 }
}
