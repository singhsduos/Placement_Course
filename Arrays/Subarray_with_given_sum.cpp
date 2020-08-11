/*
 Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.
Example 2:

Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements 
from 1st position to 5th position
is 15.
Your Task:
The task is to complete the function subarraySum() which returns starting and ending positions(1 indexing) of first such occurring subarray from the left if sum equals to subarray, else -1 is returned. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 105
1 <= Ai <= 1010
 */


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
//apply sliding window technique
void subarraySum(int arr[], int n, int s){
    
   int flag=0, i=0, j=0, sum=0;
   while(i<=n){
       if(sum<s){
           sum+=arr[i++];
       }
       else if(sum>s){
           sum-=arr[j++];
       }
       if(sum==s){
           flag=1;
           break;
       }
       
   }
   if(flag==1){
       cout<<j+1<<" "<<i<<endl;
       
   }
   else
   cout<<-1;
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        subarraySum(arr, n, s);
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends


