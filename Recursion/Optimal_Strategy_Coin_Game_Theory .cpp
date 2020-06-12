/*
 Consider a row of n coins of values v1 . . . vn, where n is even. We play a game against an opponent by alternating turns. In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin. Determine the maximum possible amount of money we can definitely win if we move first.

Note: The opponent is as clever as the user.

Let us understand the problem with few examples:



A:- 5, 3, 7, 10 : The user collects maximum value as 15(10 + 5)
B:- 8, 15, 3, 7 : The user collects maximum value as 22(7 + 15)
Does choosing the best at each move gives an optimal solution? No.
In the second example, this is how the game can be finished:

(B)…….User chooses 8.
…….Opponent chooses 15.
…….User chooses 7.
…….Opponent chooses 3.
Total value collected by user is 15(8 + 7)
(A)…….User chooses 7.
…….Opponent chooses 8.
…….User chooses 15.
…….Opponent chooses 3.
Total value collected by user is 22(7 + 15)
So if the user follows the second game state, the maximum value can be collected although the first move is not the best.
 


Approach: As both the players are equally strong, both will try to reduce the possibility of winning of each other. Now let’s see how the opponent can achieve this.

There are two choices:

The user chooses the ‘ith’ coin with value ‘Vi’: The opponent either chooses (i+1)th coin or jth coin. The opponent intends to choose the coin which leaves the user with minimum value.
i.e. The user can collect the value Vi + min(F(i+2, j), F(i+1, j-1) ).
coinGame1
* 
* 
* 
The user chooses the ‘jth’ coin with value ‘Vj’: The opponent either chooses ‘ith’ coin or ‘(j-1)th’ coin. The opponent intends to choose the coin which leaves the user with minimum value, 
i.e. the user can collect the value Vj + min(F(i+1, j-1), F(i, j-2) ).
coinGame2
* 
* 
Following is the recursive solution that is based on the above two choices. We take a maximum of two choices.
 */

#include<bits/stdc++.h>
using namespace std;

int coinMax(int a[], int l, int r);


int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
    cin>>a[i];}
    cout<<coinMax(a,0,n-1);
    return 0;
}

int coinMax(int a[], int l, int r){
  if(l+1==r){
      return max(a[l],a[r]); 
  }   
  else{
  return max(a[l]+min(coinMax(a,l+2,r), coinMax(a,l+1,r-1)), 
             a[r]+min(coinMax(a,l+1,r-1), coinMax(a,l,r-2)));
  }
}


