
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int q ;
    cin >> q;
    while(q > 0)
    {
        long long n, m;
        cin >> m >> n;
        int arr[m+1] , brr[n+1];
        for(int i = 1; i < m; i++)
            cin >> arr[i];
        for(int i = 1; i < n; i++)
            cin >> brr[i];
        sort(arr+1, arr+m);
        sort(brr+1, brr+n);
        reverse(arr+1, arr+m);
        reverse(brr+1, brr+n);
        int i = 1, j = 1;
        /*for(int i = 1; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        for(int i = 1; i < n; i++)
        {
            cout << brr[i] << " ";
        }*/
        //cout << endl;
        long long a_counter = 0, b_counter = 0, sum = 0;
        while(i < m && j < n)
        {
            if(arr[i] >= brr[j])
            {
                sum = sum + ((b_counter + 1)*arr[i]);
                a_counter++;
                i++;
            }
            else
            {
                sum = sum + ((a_counter + 1)*brr[j]);
                b_counter++;
                j++;
            }
        }
        while(i < m)
        {
            sum = sum + ((b_counter + 1) * arr[i]);
            i++;
        }
        while(j < n)
        {
            sum = sum + ((a_counter + 1) * brr[j]);
            j++;
        }
        cout << (sum % 1000000007) << endl;
        q--;
    }
    return 0;
}
