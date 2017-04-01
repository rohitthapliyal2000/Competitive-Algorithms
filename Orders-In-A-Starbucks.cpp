#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int brr[n], arr[n], num, temp;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        cin >> temp;
        arr[i] = num + temp;
        brr[i] = arr[i];
    }
    sort(arr,arr + n);
    int i = 0, t = 999;
    while( i < n )
    {
        int element = arr[i];
        for(int j = 0; j < n; j++)
        {
            if(t != j && brr[j] == element)
            {
                t = j;
                cout << j+1 << " ";
                break;
            }
        }
        i++;
    }
    return 0;
}
