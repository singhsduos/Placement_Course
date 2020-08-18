/*
  Given two sorted arrays arr[] and brr[] of sizes N and M respectively. The task is to find the median of the two arrays when they get merged.

Example 1:

Input:
N = 5, M = 6 
arr[] = {1,2,3,4,5}
brr[] = {3,4,5,6,7,8}
Output: 4
Explanation: After merging two arrays, 
elements will be as 1 2 3 3 4 4 5 5 6 7 8
So, median is 4.
Example 2:

Input:
N = 2, M = 3 
arr[] = {1,2}
brr[] = {2,3,4}
Output: 2
Explanation: After merging two arrays, 
elements will be as 1 2 2 3 4. So, 
median is 2.
Your Task:
Complete findMedian() function and return the median of two sorted arrays. If there are total even elements, we need to return floor of average of middle two elements.

Constraints:
1 <= N, M <= 106
1 <= arr[i], brr[i] <= 107

Expected Time Complexity : O(log(max(m,n)))
Expected Auxilliary Space : O(1)
 */


#include <bits/stdc++.h>
using namespace std;

int findMedian(int *, int , int *, int);

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    
	    if(n < m)
	        cout << findMedian(arr, n, brr, m) << endl;
	   else
	        cout << findMedian(brr, m, arr, n) << endl;
	    
	}

}// } Driver Code Ends


//User function template for C++

// arr : given array with size n 
// brr : given array with size m
int findMedian(int arr[], int n, int brr[], int m){
    int x = m+n;
    int arr3[x];
  
    int i = 0, j = 0, k = 0; 
  
    // Traverse both array 
    while (i<n && j <m) 
    { 
        // Check if current element of first 
        // array is smaller than current element 
        // of second array. If yes, store first 
        // array element and increment first array 
        // index. Otherwise do same with second array 
        if (arr[i] < brr[j]) 
            arr3[k++] = arr[i++]; 
        else
            arr3[k++] = brr[j++]; 
    } 
  
    // Store remaining elements of first array 
    while (i < n) 
        arr3[k++] = arr[i++]; 
  
    // Store remaining elements of second array 
    while (j < m) 
        arr3[k++] = brr[j++]; 
        
        // now apply formula for median

  float median;
   if (x%2 == 0) // if SIZE is even (it is for your case)
   {
    median = ( arr3[x/2] + arr3[x/2 - 1] )/2.0f;
   }
   else
   {
    //ex: if SIZE == 3, array[SIZE/2] will be array[1] due to truncation
    median = arr3[x/2];
   }
   
   return median;
   }
    
