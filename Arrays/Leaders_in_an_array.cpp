/*
Given an array A of positive integers. Your task is to find the leaders in the array.

Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader. 

Example 1:

Input:
N = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements 
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
Example 2:

Input:
N = 5
A[] = {1,2,3,4,0}
Output: 4 0
Explanation: 4 and 0 are leaders.
Your Task:
The task is to complete the function leader() which returns an array of leaders in same order as they appear in the array. The printing is automatically done by driver code.

Expected Time Complexity: O(N).

Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 107
0 <= Ai <= 107 
 * 
 */


// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the leaders in an array of size n
vector<int> leaders(int arr[], int n){ 
    vector<int>v;
    long long max=arr[n-1];
    for(int i=n-1; i>=0;i--){
        if(max <= arr[i]){
            max=arr[i];
           v.push_back(max);
        }
    }
    
    reverse(v.begin(),v.end());
    return v;
}


// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  

