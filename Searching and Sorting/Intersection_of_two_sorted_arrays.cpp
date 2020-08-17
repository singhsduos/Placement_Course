/*
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. The task is to find intersection of the two arrays.
The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
 

Example 1:

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
Explanation: 2 and 4 are only common 
elements in both the arrays.
Example 2:

Input: 
N = 5, arr1[] = {1, 2, 2, 3, 4}
M = 6, arr2[] = {2, 2, 4, 6, 7, 8}
Output: 2 4
Explanation: 2 and 4 are the only 
common elements.
Example 3:

Input:
N = 2, arr1[] = {1, 2}
M = 2, arr2[] = {3, 4}
Output: -1
Explanation: No common elements.

Your Task:
This is a function problem. You only need to complete the function printIntersection() that takes N and M as parameters and return the array the intersection of two arrays. If the intersection is empty then return -1.
The newline is appended by driver code.

Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(N + M).

Constraints:
1 <= N, M <= 105
1 <= arr[i], brr[i] <= 106
 */


#include <bits/stdc++.h> 
using namespace std; 

vector<int> printIntersection(int arr1[], int arr2[], int N, int M);  
  
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        
        // Function calling 
        vector<int> v;
        v = printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 
// } Driver Code Ends


/* Function prints Intersection of arr1[] and arr2[] 
N is the number of elements in arr1[] 
M is the number of elements in arr2[] 
Return the array
*/
vector<int> printIntersection(int arr1[], int arr2[], int n, int m) 
{ 
    vector<int> v;
    int i=0, j=0;
    while(i<n && j<m){
       if(arr1[i]<arr2[j])
        i++;
        
       else if(arr1[i]>arr2[j])
         j++;
       
       else
       {
           v.push_back(arr1[i]);
           i++;
           j++;
       }
       
    }
      vector<int>::iterator ip;
      ip = unique(v.begin(),v.end());
      v.resize(distance(v.begin(),ip));
      if(v.empty())
      v.push_back(-1);
      return v;
    
}


