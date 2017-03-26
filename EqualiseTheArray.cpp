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
    int arr[101] = {0} , num;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num]++;
    }
    int max = 0;
    for(int i = 0; i < 101; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << n-max;
    return 0;
}
