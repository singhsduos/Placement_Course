/*
 Given an array arr[] of size N containing positive integers and an integer X. You need to find the value in the array which is smaller than X and closest to it.

Input Format:
The input line contains T, denotes the number of test cases. Each test case contains three lines. First-line contains N. Second line contains elements of array space-separated. The third line contains an integer X.

Output Format:
For each testcase in a new line, you need to print the element which is closest to it. If not found then print "-1" without quotes.

User Task:
Since this is a functional problem you need to complete the given function immediateSmaller() which takes 3 arguments(array arr, N and X) and returns the answer. The printing is done by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 100
1 <= N <= 103
1 <= arr[i], X <= 104

Sample Input:
2
5
4 67 13 12 15
16
5
1 2 3 4 5
1

Sample Output:
15
-1

Explanation:
Testcase 1:  For a given value 16, there are four values which are smaller than it. But 15 is the number which is smaller and closest to it with minimum difference of 1.
Testcase 2: For a given value 1, no value is smaller than it and closest to it in the given array.
 */


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// User function to complete
// arr[]: input array
// n: size of array
// k: find element smaller and closest to it. 
int immediateSmaller(int arr[], int n, int x)
{   int max = -1;
	
	//we are taking -1 because as arr[i] value reached maximum nearer to X 
	//and again if arr[i] cross X value means become greater than X-arr[i] is always negative so we break the loop hear only
	
    for(int i=0;i<n;i++){
     if(arr[i]<x){
         if(arr[i]>max)
      max=arr[i];
     }
    }
   return max;
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	
        	cout << immediateSmaller(arr, n, x) << endl;
	}
	
	
	return 0;
}
  // } Driver Code Ends

