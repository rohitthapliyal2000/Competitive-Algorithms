#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long *arr;
    arr = (long long *) calloc((n+3),sizeof(long long));
    long long operations , a , b , k;
    cin >> operations;
    for(long int i = 0; i < operations; i++)
    {
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b+1] -= k;
    }
    long int i = 1;
    long long counter = 0 , max = 0;
    while(i <= n)
    {
        counter = counter + arr[i];
        if(counter > max)
            max = counter;
        i++;
    }
    cout << max;
    return 0;
}
