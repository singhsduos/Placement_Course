/*
Given an integer x. The task is to find the square root of x. If x is not a perfect square, then return floor(√x).

Example 1:

Input:
x = 5
Output: 2
Explanation: Since, 5 is not perfect 
square, so floor of square_root of 
5 is 2.
Example 2:

Input:
x = 4
Output: 2
Explanation: Since, 4 is a perfect 
square, so its square root is 2.
Your Task:
The task is to complete the function floorSqrt() which should return the square root of given number x.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ x ≤ 107 
 */


#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);
  

 // } Driver Code Ends


// method 1: using lib and time complexity O(1)
long long int floorSqrt(long long int x) 
{
    int y = floor(sqrt(x));
    return y;
    
}





// method 2 : using binary search and time complexity O(logN)

long long int floorSqrt(long long int x) 
{
    long long int start = 1;
    long long int end = x;
    long long int ans =0 ;
    
    // Do Binary Search for floor(sqrt(x))
    while(start <= end) {
        long long int mid = start + (end - start)/2;
        
        
       // If x is a perfect square 
        long long int sq = mid * mid; 
        if(sq == x) {
            return mid;
        } 
        
        // Since we need floor, we update answer when mid*mid is  
        // smaller than x, and move closer to sqrt(x) 
        else if(sq < x) {
            low = mid +1;
            ans = mid;
        } 
        
        // If mid*mid is greater than x 
        else {
            end = mid -1;
        }
    }
    return ans;
    
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}

