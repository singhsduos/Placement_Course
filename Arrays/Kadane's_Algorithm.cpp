/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output: 9
Explanation: Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
Example 2:

Input:
N = 4
arr[] = {-1,-2,-3,-4}
Output: -1
Explanation: Max subarray sum is -1 
of element (-1)
Your Task:
The task is to complete the function maxSubarraySum() which returns the sum of subarray with maximum sum.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] <= 107 
 */

#include<bits/stdc++.h>
using namespace std;


 // Kadane's Algorithm means:-
 // Simple idea of the Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this). 
 // And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this). 
 // Each time we get a positive sum compare it with max_so_far and update max_so_far if it is greater than max_so_far


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
   int maxFar= 0, maxHere=0;
   for(int i=0; i<n;i++){
       maxHere+=arr[i];
       if(maxHere>maxFar)
       maxFar=maxHere;
       
       if(maxHere<0)
       maxHere=0;
       
   }
   return maxFar;
    // Your code here
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  

