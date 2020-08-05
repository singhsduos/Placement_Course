/*
 We hope you are familiar with using counter variables. Counting allows us to find how may times a certain element appears in an array or list.

You are given an array arr[] of size N. You are also given two elements x and y. Now, you need to tell which element (x or y) appears most in the array. In other words, return the element, x or y, that has higher frequency in the array. If both elements have the same frequency, then just return the smaller element.

NOTE :  We need to return the elements, not their counts.

Example 1:

Input:
N = 11
arr[] = {1,1,2,2,3,3,4,4,4,4,5}
x = 4, y = 5
Output: 4
Explanation: n=11; 
elements = {1,1,2,2,3,3,4,4,4,4,5}; 
x=4; y=5
x frequency in arr is = 4 times
y frequency in arr is = 1 times
x has higher frequency, so we print 4.



Example 2:

Input:
N = 8
arr[] = {1,2,3,4,5,6,7,8}
x = 1, y = 7
Output: 1
Explanation: n=8; 
elements = {1,2,3,4,5,6,7,8}; 
x=1; y=7
x frequency in arr is 1 times
y frequency in arr is 1 times
both have same frequency, so 
we look for the smaller element.
x=1 is smaller than y=7, so print 1.

Your Task:
You don't need to read input or print anything. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function majorityWins() that takes array, n, x, y as parameters and return the element with highest frequency.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= n <= 103
0 <= arri , x , y <= 108
 */


#include <bits/stdc++.h>
using namespace std;



int majorityWins(int arr[], int n, int x,int y)
{
    int count_x=0;//counter to count frequency of x
    int count_y=0;//counter to count frequency of y
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count_x++;
        }
        if(arr[i]==y){
            count_y++;
        }
    }
    
    if(count_x>count_y)
    return x;
    else if(count_y>count_x)
    return y;
    else{
       if(x>y){
       return y;
       }
      else{
      return x; 
    }
  
    } 
}

// { Driver Code Starts.

int main() {
    
    int t; //Testcases
    cin>>t; // Input the testcases
    while(t--) //Until all testcases are exhausted
    {
        int n; //Size of array
        cin>>n; //Input the size
        int arr[n]; //Declaring array of size n
        for(int i=0;i<n;i++) // Running a loop to input all elements of arr
        cin>>arr[i];
        
        int x,y; //declare x and y
        cin>>x>>y; // input x and y
        cout << majorityWins(arr,n,x,y) << endl; //calling the function that you complete
        
    }
    
	return 0;
}  // } Driver Code Ends

