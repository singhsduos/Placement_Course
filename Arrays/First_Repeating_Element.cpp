/*
Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.

Example 1:

Input:
N = 7
arr[] = {1,5,3,4,3,5,6}
Output: 2
Explanation: 5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.
Example 2:

Input:
N = 4
arr[] = {1,2,3,4}
Output: -1
Explanation: All elements appear 
only once so -1 is printed.
Input :
The first line contains an integer T denoting the total number of test cases. In each test cases, First line is number of elements in array N and second its values.

Your Task:
Complete firstRepeated() function and return the index of first repeated element, if there is not any repeating element then return “-1” (without quotes). Use 1 Based Indexing.

Constraints:
1 <= N <= 106
0 <= Ai <= 106 
 */


// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array

int firstRepeated(int arr[], int n) {
unordered_map<int, int> um;
 
    // iterating through the array elements
    // and increment the count in map
for(int i=0;i<n;i++){
    um[arr[i]]++;
    // Iterating through the array elements 
    // and check if frequency is greater than 1,
    // then return that index
}
for(int i=0; i<n;i++){
    if(um[arr[i]]>=2)
    return i+1;

}
return -1;


}


