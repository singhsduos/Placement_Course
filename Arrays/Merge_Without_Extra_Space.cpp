/*
Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays in place, i. e., we need to consider all n + m elements in sorted order, then we need to put first n elements of these sorted in first array and remaining m elements in second array.

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as follows.

Example 1:

Input: 
N = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation: After merging the two non-decreasing 
arrays, we have, 0 1 2 3 5 6 7 8 9.
Example 2:

Input: 
N = 2, arr1[] = [10, 12] 
M = 3, arr2[] = [5 18 20]
Output: 
arr1[] = [5 10]
arr2[] = [12 18 20]
Explanation: After merging two sorted arrays 
we have 5 10 12 18 20.

Your Task:
This is a function problem. You only need to complete the function merge() that takes n and m as parameters.

Constraints:
1 <= X, Y <= 5*104
0 <= arr1i, arr2i <= 109 
 */


#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


// Function to merge two input arrays
// arr1[], arr2[]: input arrays
// n, m: size of arr1[] and arr2[] respectively
void merge(int arr1[], int arr2[], int n, int m) 
{ 
      int x = n-1, y=0;
      
        // Check if current element of first 
        // array is greater than current element 
        // of second array. If yes, then swap 1st and 2nd
        // array element and decrement first array 
        // index. Otherwise do same with second array 
        
        
      while(x>=0&&y<m){
          if(arr1[x]>arr2[y]){
              swap(arr1[x],arr2[y]);
              x--;
              y++;
              
          }
          else{
          break;
      }
     }
        sort(arr1,arr1+n); 
        sort(arr2,arr2+m); 
    
    
    
} 


// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    int arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    
	    merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            printf("%d ", arr1[i]); 
        
       
	    for (int i = 0; i < m; i++) 
		    printf("%d ", arr2[i]); 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // link for understanding topic: https://www.geeksforgeeks.org/merge-two-sorted-arrays/
