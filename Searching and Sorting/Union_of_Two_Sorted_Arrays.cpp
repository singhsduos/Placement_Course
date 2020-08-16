/*
Given two sorted arrays arr[] and brr[] of size N and M respectively. The task is to find the union of these two arrays.
Union of two arrays can be defined as the common and distinct elements in the two arrays.

Example 1:

Input: 
N = 5, arr1[] = {1, 2, 3, 4, 5}  
M = 3, arr2 [] = {1, 2, 3}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
Example 2:

Input: 
N = 5, arr1[] = {2, 2, 3, 4, 5}  
M = 5, arr2[] = {1, 1, 2, 3, 4}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
Example 3:

Input:
N = 5, arr1[] = {1, 1, 1, 1, 1}
M = 5, arr2[] = {2, 2, 2, 2, 2}
Output: 1 2
Explanation: Distinct elements including 
both the arrays are: 1 2.

Your Task: This is a function problem. You only need to complete the function findUnion() that takes two arrays arr1[], arr2[], and their size N and M as parameters and returns the union of two arrays. The new line is automatically appended by the driver code.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(N+M).

Constraints:
1 <= N, M <= 105
1 <= arr[i], brr[i] <= 106 
 */

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{

    
    vector<int> v; // make new union vector combine 
    int i=0, j=0;
    
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j]) //check if both element equal
        {
            v.push_back(arr1[i]); // inserting element in new vector from back(from right-mst side)
            i++;
            j++;
        }
        
        else if(arr1[i]<arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
        
        else
        {
            v.push_back(arr2[j]);
            j++;
        }
        
    }
    
    while(i<n)
    {
        v.push_back(arr1[i]);
        i++;
    }
    
    while(j<m)
    {
        v.push_back(arr2[j]);
        j++;
    }
    

    vector<int>::iterator ip;
    
    ip = unique(v.begin(), v.end());// stl in c++ to add unique element from particular array
    
    v.resize(distance(v.begin(), ip)); // Resizing the vector so as to remove the undefined terms
    
    return v;
    
}


int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
} 

