/*
Given a string S. The task is to print all permutations of a given string.

Input Format:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

Output Format:
For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

Your Task:
This is a function problem. You only need to complete the function permutation that takes S as parameter and prints the permutations in lexicographically increasing order. The newline is automatically added by driver code.

Constraints:
1 ≤ T ≤ 100
1 ≤ size of string ≤ 5

Example:
Input:
2
ABC
ABSG

Output:
ABC ACB BAC BCA CAB CBA 
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA

Explanation:
Testcase 1: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .
 */


// Method 1 :

#include<bits/stdc++.h>
using namespace std;

void permutation(string S);

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		permutation(S);
		cout<<endl;
	
	}
	return 0;
}// } Driver Code Ends

void per(string &s,int l,int r,vector<string>&v){
if(r==l ) v.push_back(s);
else
{
for(int i=l;i<=r;i++){
swap(s[l],s[i]);
per(s,l+1,r,v);
swap(s[l],s[i]);
}
}
}
void permutation(string s)
{

vector<string>v;
per(s,0,s.length()-1,v);
sort(v.begin(),v.end());
for(auto it=v.begin();it!=v.end();it++)
cout<<*it<<" ";
}


// Method 2:

#include<bits/stdc++.h>
using namespace std;

void permutation(string S);

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		permutation(S);
		cout<<endl;
	
	}
	return 0;
}// } Driver Code Ends

void permutation(string S)
{
    //Your code here
    sort(S.begin(),S.end());
    do
    {
        cout<<S<<" ";
    }while(next_permutation(S.begin(),S.end()));
}

// Method 3:

#include<bits/stdc++.h>
using namespace std;

void permutation(string S);

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		permutation(S);
		cout<<endl;
	
	}
	return 0;
}// } Driver Code Ends

void _swap_func(string &S, int begin, int end, vector<string> &S_permutated) {
char temp = S[begin];
S[begin] = S[end];
S[end] = temp;

}

void _permutation(string S, int begin, int end, vector<string> &S_permutated) {
if(begin == end) {
S_permutated.push_back(S);
return;
} else {
for(int i = begin; i <= end; i++) {
_swap_func(S, begin, i, S_permutated);
_permutation(S, begin + 1, end, S_permutated);
}
}
}

void permutation(string S)
{
//Your code here
int length = S.length();
int begin = 0;
int end = length - 1;
vector<string> S_permutated;
_permutation(S, begin, end, S_permutated);
sort(S_permutated.begin(), S_permutated.end());
for(int i = 0; i < S_permutated.size(); i ++) {
cout<< S_permutated[i] << " ";
}
}

