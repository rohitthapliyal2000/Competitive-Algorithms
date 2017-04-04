#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int counter = 0;

void find(int n, int p, int sum, int index)
{
    if(n == 0)
        return;
    else if(sum > n)
        return;
    else if(sum == n)
        counter++;
    else
    {
        while(pow(index,p) <= n)
        {
            sum = sum + pow(index,p);
            find(n,p,sum,index+1);
            sum = sum - pow(index,p);
            index++;
        }
    }
}

int main()
{
    int n , p;
    cin >> n >> p;
    int sum = 0;
    find(n, p, sum, 1);
    cout << counter;
    return 0;
}

