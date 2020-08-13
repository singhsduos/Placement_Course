/*
Given an array arr[] of N non-negative integers representing the height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
The structure is like below:
|  |
|_|
We can trap 2 units of water in the middle gap.



Example 1:

Input:
N = 4
arr[] = {7,4,0,9}
Output: 10
Explanation: Water trapped by the 
block of height 4 is 3 units, block 
of height 0 is 7 units. So, the 
total unit of water trapped is 
10 units.
Example 2:

Input:
N = 3
arr[] = {6,9,9}
Output: 0
Explanation: No water will be trapped.
Your Task:
The task is to complete the function trappingWater() which returns the total amount of water that can be trapped.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
3 <= N <= 107
0 <= Ai <= 108 
 */


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

int sum = 0;

    // left[i] contains height of tallest bar to the 
    // left of i'th bar including itself 
int l[n];

    // Right [i] contains height of tallest bar to 
    // the right of ith bar including itself 

int r[n],i;

// Fill left array or find max left-most array
l[0]=arr[0];
for(i=1; i<n-1; i++){
    if(l[i-1]>arr[i])
    l[i] = l[i-1];
    
    else
    l[i] =arr[i];
}
 
// Fill right array or find max right-most array
r[n-1]=arr[n-1];

for(i = n-2; i>=0; i-- ){
 if(r[i+1]>arr[i])
 r[i] = r[i+1];
 
 else
 r[i] = arr[i];
 
 // Calculate the accumulated water element by element 
 // consider the amount of water on i'th bar, the 
 // amount of water accumulated on this particular 
 // bar will be equal to min(left[i], right[i]) - arr[i]
 sum+=max((min(r[i],l[i])-arr[i]), 0);
}
return  sum;
  
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
} 

