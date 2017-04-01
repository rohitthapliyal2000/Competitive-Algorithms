#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int arr[], int i, int n)
{
    int maxx = 0;
    for(int l = i; l <= n; l++)
    {
        if(arr[l] == n-i+1)
        {
            maxx = l;
            break;
        }
    }
    return maxx;
}

int main()
{
    long int n,k,j;
    cin >> n >> k;
    int *arr;
    arr = (int *) calloc((n+1),sizeof(int));
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= k; i++)
    {
        if(i > n)
            break;
        if(arr[i] == n-i+1)
        {
            k++;continue;
        }
        else
        {
            int j = max(arr,i,n);
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    return 0;
}
