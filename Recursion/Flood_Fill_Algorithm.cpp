/*
 In MS-Paint, when we take the brush to a pixel and click, the color of the region of that pixel is replaced with a new selected color. Following is the problem statement to do this task.
Given a 2D screen, location of a pixel in the screen and a color, replace color of the given pixel and all adjacent same colored pixels with the given color.

Example:

Input:
       screen[m][n] = {{1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 1, 1, 1, 1, 1, 0, 0},
                      {1, 0, 0, 1, 1, 0, 1, 1},
                      {1, 2, 2, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 2, 2, 0},
                      {1, 1, 1, 1, 1, 2, 1, 1},
                      {1, 1, 1, 1, 1, 2, 2, 1},
                      };
    r = 4, c = 4, newFill = 3
The values in the given 2D screen indicate colors of the pixels.
r and c are coordinates of the brush, newColor is the color that
should replace the previous color on a[r][c] and all surrounding
pixels with same color.

Output:
Screen should be changed to following.
       screen[m][n] = {{1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 1, 1, 1, 1, 1, 0, 0},
                      {1, 0, 0, 1, 1, 0, 1, 1},
                      {1, 3, 3, 3, 3, 0, 1, 0},
                      {1, 1, 1, 3, 3, 0, 1, 0},
                      {1, 1, 1, 3, 3, 3, 3, 0},
                      {1, 1, 1, 1, 1, 3, 1, 1},
                      {1, 1, 1, 1, 1, 3, 3, 1},
                      };
 */


#include<iostream> 
using namespace std; 
  
// Dimentions of dual array 
#define m 8 
#define n 8 
  

void floodFill(int a[][n], int r, int c, int prevFill, int newFill) // r = row, c = coloumn
{ 
    // Base cases 
    if (r < 0 || r >= m || c < 0 || c >= n) { // if this condition not true means we are in inside a matrix only otherwise it return from here
        return; }
    if (a[r][c] != prevFill){ // if this condition not true means at this coordinate colour is equal to previous colour only 
        return; }
    
  
    // Replace the color at (r, c) 
    a[r][c] = newFill; // fill the new colour in r,c coordinates 
  
    // now we call recursive call
    floodFill(a, r+1, c, prevFill, newFill); // lower coordinate from r
    floodFill(a, r-1, c, prevFill, newFill); // upper coordinate from r
    floodFill(a, r, c+1, prevFill, newFill); // right coordinate from c
    floodFill(a, r, c-1, prevFill, newFill); // left coordinate from c
} 
  

int main() 
{ 
    int a[m][n] =    {{1, 1, 1, 1, 1, 1, 1, 1}, 
                      {1, 1, 1, 1, 1, 1, 0, 0}, 
                      {1, 0, 0, 1, 1, 0, 1, 1}, 
                      {1, 2, 2, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 2, 2, 0}, 
                      {1, 1, 1, 1, 1, 2, 1, 1}, 
                      {1, 1, 1, 1, 1, 2, 2, 1}, 
                     }; 
    
    floodFill(a, 4, 4, 2, 3); 
  
    cout << "Updated screen after call to floodFill: \n"; 
    for (int i=0; i<m; i++) 
    { 
        for (int j=0; j<n; j++) 
           cout << a[i][j] << " "; 
        cout << endl; 
    } 
    return 0;
} 
