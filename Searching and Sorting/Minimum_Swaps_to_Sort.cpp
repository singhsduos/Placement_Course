/*
Given an array of integers. Find the minimum number of swaps required to sort the array in non-decreasing order.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the no of element of the array A[ ]. In the next line are N space separated values of the array A[ ] .

Output:
For each test case in a new line output will be an integer denoting  minimum umber of swaps that are  required to sort the array.

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= A[] <= 106

User Task:
You don't need to read input or print anything. Your task is to complete the function minSwaps() which takes the array arr[] and its size N as inputs and returns an integer denoting the minimum number of swaps required to sort the array. If the array is already sorted, return 0. 

Expected Time Complexity: O(NlogN).
Expected Auxiliary Space: O(N).

Example(To be used only for expected output):
Input:
2
5
1 5 4 3 2
4
8 9 16 15

Output:
2
1

Explanation:
Test Case 1: We need two swaps, swap 2 with 5 and 3 with 4 to make it sorted. 
 */

// C++ program to find minimum number of swaps
// required to sort an array
#include<bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);

// Driver program to test the above function
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<minSwaps(a,n)<<endl;
	}
}

// } Driver Code Ends


/* You are required to complete this method */

// return the minimum number of swaps required to sort the array
int minSwaps(int arr[], int N){
  int n= N;
  
     // Create an array of pairs where first 
    // element is array element and second element 
    // is position of first element 
    
  pair<int, int> b[n];  // here pair work like temparory array where we store same array element but with position records
  for(int i=0;i<n;i++){
      b[i].first= arr[i];
      b[i].second= i;
  }
  sort(b,b+n); // we sort this array
  
  
     // To keep track of visited elements. Initialize 
    // all elements as not visited or false.
    
  vector<bool>v(n,false); // here vector is like array where now all final element goes
  int ans = 0;  // Initialize result 
  for(int i=0;i<n;i++){
      
      // already swapped and corrected or 
        // already present at correct pos 
      if(v[i]=0||b[i].second==i)
      continue;
      
      // find out the number of  node in 
        // this cycle and add in ans 
      int cnt=0;
      int j=i;
      while(!v[j]){
          v[j]=true;
          
           cnt++;
           
           // move to next node 
           j=b[j].second;
      }
      ans+=(cnt-1);  // Update answer by adding current cycle.
  }
  return ans;
}



