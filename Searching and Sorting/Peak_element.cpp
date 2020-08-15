/*
Given an array A of N integers. The task is to find a peak element in A in O( log N ) .
An array element is peak if it is not smaller than its neighbours. For corner elements, consider only one neighbour.

Example 1:

Input:
N = 3
A[] = {1,2,3}
Output: 2 
Explanation: In the given array, 
3 is the peak element as it is 
greater than its neighbour.
Example 2:

Input:
N = 2
A[] = {3,4}
Output: 1
Explanation: 4 is the peak element 
as it is greater than its neighbour 
elements.
Your Task:
You don't have to read input or print anything. Just complete the provided function peakElement() and return a valid index with respect to 0 based indexing.
Note 1: Multiple peak element may be possible, in that case return any of the valid index .
Note 2: If you click on Compile and Test the output will be 1 if the index that you return is correct. Otherwise output will be 0. 

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 105
1 <= A[] <= 106
 */

#include<bits/stdc++.h>
using namespace std;


/* The function should return the index of any
   peak element present in the array */



// method 1 : Time complexity: O(n).  Naive Approach
int peakElement(int arr[], int n)
{  
  
   if(arr[0]>arr[1])
   return 0;
   if(arr[n-1]>arr[n-2])
   return (n-1);
   
   for(int i=1;i<=(n-2);i++){
       if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
       return i;
   }
   
   
}

// method 2: Time Complexity: O(Logn). Binary Search

int findPeakUtil(int arr[], int low, 
                 int high, int n) 
{ 
    // Find index of middle element 
    // (low + high)/2 
    int mid = low + (high - low) / 2; 
  
    // Compare middle element with its 
    // neighbours (if neighbours exist) 
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&  
        (mid == n - 1 || arr[mid + 1] <= arr[mid])) 
        return mid; 
  
    // If middle element is not peak and its 
    // left neighbour is greater than it, 
    // then left half must have a peak element 
    else if (mid > 0 && arr[mid - 1] > arr[mid]) 
        return findPeakUtil(arr, low, (mid - 1), n); 
  
    // If middle element is not peak and its 
    // right neighbour is greater than it, 
    // then right half must have a peak element 
    else
        return findPeakUtil( 
            arr, (mid + 1), high, n); 
} 
  
// A wrapper over recursive function findPeakUtil() 
int findPeak(int arr[], int n) 
{ 
    return findPeakUtil(arr, 0, n - 1, n); 
} 

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}

