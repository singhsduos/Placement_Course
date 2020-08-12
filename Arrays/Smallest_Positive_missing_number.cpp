/*
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
Note: Expected solution in O(n) time using constant extra space.

Input:
First line consists of T test cases. First line of every test case consists of N, denoting the number of elements in array. Second line of every test case consists of elements in array.

Output:
Single line output, print the smallest positive number missing.

User Task:
The task is to complete the function findMissing() which finds the smallest positive missing number.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 100
1 <= N <= 106
-106 <= arr[i] <= 106

Example:
Input:
2
5
1 2 3 4 5
5
0 -10 1 3 -20
Output:
6
2

Explanation:
Testcase 1: Smallest positive missing number is 6.
Testcase 2: Smallest positive missing number is 2. 
 */


#include <bits/stdc++.h>
using namespace std;

// Function to return the first missing positive
// number from the given unsorted array
int firstMissingPos(int A[], int n)
{

    // To mark the occurrence of elements
    bool present[n + 1] = { false };

    // Mark the occurrences
    for (int i = 0; i < n; i++) {

        // Only mark the required elements
        // All non-positive elements and
        // the elements greater n + 1 will never
        // be the answer
        // For example, the array will be {1, 2, 3}
        // in the worst case and the result
        // will be 4 which is n + 1
        if (A[i] > 0 && A[i] <= n)
            present[A[i]] = true; // we are making arrays value as of new index value of present[] array
    }

    // Find the first element which didn't
    // appear in the original array or just above one array
    for (int i = 1; i <= n; i++)
        if (!present[i]) // here we check above array which we didn't get value from above present[] array 
            return i; // and we mark here that value

    // If the original array was of the
    // type {1, 2, 3} in its sorted form
    return n + 1;
}



int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
} 
