/*
Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.
Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will not be same for a train, but we can have arrival time of one train equal to departure of the other.
In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both departure of a train and arrival of another.

Example 1:

Input: N = 6 
arr[] = [0900  0940 0950  1100 1500 1800]
dep[] = [0910 1200 1120 1130 1900 2000]
Output: 3
Explanation: 
Minimum 3 platforms are required to 
safely arrive and depart all trains.
Example 2:

Input: N = 3
arr[] = [0900 1100 1235]
dep[] = [1000 1200 1240] 
Output: 1
Explanation: Only 1 platform is required to 
safely manage the arrival and departure 
of all trains. 

Your Task:
You don't need to read input or print anything. Your task is to complete the function findPlatform() which takes the array arr[] (denoting the arrival times), array dep[] (denoting the departure times) and the size of the array as inputs and returns the minimum number of platforms required at the railway station such that no train waits.

Note: Time intervals are in the 24-hour format(hhmm),  of the for HHMM , where the first two characters represent hour (between 00 to 23 ) and the last two characters represent minutes (between 00 to 59).

Expected Time Complexity: O(nLogn).
Expected Auxiliary Space: O(n).

Constraints:
1 <= N <= 1000
1 <= A[i] < D[i] <= 2359
 */


// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// link for logic explanation:-
// https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/


int findPlatform(int arr[], int dep[], int n)
{
    // we will sort because to take record 
    //number of trains at any time keeping track of trains that have arrived, 
    //but not departed.
 sort(arr,arr+n);
 sort(dep,dep+n);
 int pf = 1, result=1; // pf =  no. platform needed(i.e atleast 1)
 int i =1, j=0;
 
 while(i<n && j<n){
     if(arr[i]<=dep[j]){ // we take count that train which are not departed in increament order of pf
     pf++;
     i++;}
     
     else if(arr[i]>dep[j]){ // as arrival time increases in compare to departure time it means train departed and we decreased no. of pf
     pf--;
     j++;}
     
     
     if(pf>result) // Update result if needed 
     result=pf;
     
 }
 return result;
}



int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
           for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  

