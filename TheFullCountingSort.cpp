#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;
    cin >> n;
    int arr[n] ;
    string str[n] ;
    int max = 0;
    for(int i = 0; i < n; i++)
        {
        cin >> arr[i];
        cin >> str[i];
        if(arr[i] > max)
            max = arr[i];
    }
    for(int j = 0; j <= max; j++)
        {
        for(int i = 0; i <= n-1; i++)
            {
            if(arr[i] == j)
                {
                if(i < n/2)
                    {
                    cout << "- ";
                }
                else
                    {
                    cout << str[i] << " ";
                }
            }
        }
    }

    return 0;
}
