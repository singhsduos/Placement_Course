/*
 The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.

Input:
The first line of input is T denoting the number of testcases. T testcases follow. Each testcase contains a single line of input containing N.

Output:
For each testcase, print the steps and the total steps taken. Please see the example output to see the steps format.
Please take care of the case of the letters.

Your Task:
This is a function problem. You only need to complete the function toh that takes following parameters:

N: number of discs
from: The rod number from which we move the disc
to: The rod number to which we move the disc
aux: The rod that is used as an auxillary rod
moves: reference to the moves variable to store total moves
The driver code prints the total moves.

Constraints:
1 <= T <= 16
1 <= N <= 16

Example:
Input:
2
2
3
Output:
move disk 1 from rod 1 to rod 2
move disk 2 from rod 1 to rod 3
move disk 1 from rod 2 to rod 3
3
move disk 1 from rod 1 to rod 3
move disk 2 from rod 1 to rod 2
move disk 1 from rod 3 to rod 2
move disk 3 from rod 1 to rod 3
move disk 1 from rod 2 to rod 1
move disk 2 from rod 2 to rod 3
move disk 1 from rod 1 to rod 3
7

Explanation:
Testcase 1: For N=2 , steps will be as follows in the example and total 3 steps will be taken.
Testcase 2: For N=3 , steps will be as follows in the example and total 7 steps will be taken.
 */


#include <bits/stdc++.h>

using namespace std;

void toh(int n, int from, int to, int aux, long long &moves);

int main() {

    int T;
    cin >> T;
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;
        toh(N, 1, 3, 2, moves);
        cout << moves << endl;
    }
    return 0;
}
// } Driver Code Ends


// You need to complete this function

// avoid space at the starting of the string in "move disk....."
void toh(int N, int from, int to, int aux, long long &moves) {
    if(N==1){
        
        
        cout<<"move disk "<< N<<" from rod "<<from<<" to rod "<<to<<endl;
       moves++;
        return;
    }
    
    else{
    toh(N-1, from, aux, to, moves);
    
    cout<<"move disk "<<N<<" from rod " <<from<< " to rod " << to<<endl;
    
    toh(N-1,aux, to, from, moves);
    moves++;
    }
    
}


