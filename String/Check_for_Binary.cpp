/*
 Given a non-empty sequence of characters, return true if sequence is Binary, else return false

Input:

The task is to complete the method that takes a string as argument. We should not read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Output:
Your function should return true str is binary, else false

Constraints:
1 <=T<= 50
1 <=Length of str<= 10000

Example:

Input:
2
101
75

Output:
1
0 
 */



#include <stdio.h>
#include<string.h>

int isBinary(char *str);

// Driver program to test above functions
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       char str[10005];
       scanf("%s", str);
       if(isBinary(str))
       {
           printf("1\n");
       }
       else{
        printf("0\n");
       }
    }
    return 0;
}



//Return 1 if true, else return 0 if not true
int isBinary(char *str)
{
    //Code here
    
    for(int i=0;i<strlen(str);i++){ // if char string i.e (Length of C-style string) is there so we take strlen(string); to calculate size
                                    // if string str i.e (Length of String Object) is there so we take str.size(); to calculate size
    if(str[i]!='0'&&str[i]!='1')
    return 0;
    }
    return 1;
}

