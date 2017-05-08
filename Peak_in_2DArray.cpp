/*Rohit Thapliyal
  Finding peak element in a 2D Array.
  Peak element is one which is greater than or equal to all its neighbours */
#include<bits/stdc++.h>
using namespace std;

//Index of Global Maximum
int index;

//Function to find the global maximum
int findGlobalMax(int arr[][4], int rows, int pick)
{
    int max = 0;
    for(int i = 0; i < rows; i++)
    {
        if(max < arr[i][pick])
        {
            //Saving global maximum and its index to check its neighbours
            max = arr[i][pick];
            index = i;
        }
    }
    return max;
}

//Function to find a peak element
int peakFinder(int arr[][4], int rows, int columns, int pick)
{
    //Evaluating global maximum from a column
    int max = findGlobalMax(arr, rows, pick);

    //If we are on the first or last column, global max is a peak
    if(pick == 0 || pick == columns-1)
    {
        return max;
    }

    //Global Maximum is a peak
    if(max >= arr[index][pick-1] && max >= arr[index][pick+1])
    {
        return max;
    }

    //Call from left of column
    if(max < arr[index][pick-1])
    {
        peakFinder(arr, rows, columns, pick-1);
    }

    //Call from right of column
    if(max < arr[index][pick+1])
    {
        peakFinder(arr, rows, columns, pick+1);
    }
}

//Driver Code
int main()
{
    int arr[4][4] = {{ 10, 8, 10, 10 }, { 14, 13, 12, 11 }, { 15, 9, 11, 21 }, { 16, 17, 19, 20 } };

    //Total elements
    int n = sizeof(arr)/sizeof(int);

    //Number of Rows
    int rows = sizeof(arr[1])/sizeof(int);

    //Number of Columns
    int columns = n/rows;

    int peak = peakFinder(arr, rows, columns, columns/2);
    cout << peak;
}
