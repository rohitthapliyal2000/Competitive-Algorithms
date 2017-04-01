#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }

    int result = 0;
    sort(arr, arr+n);
    reverse(arr, arr+n);
    int i = 0 , mul = 1;
    while(i < n)
    {
        int l = 0;
        while(i < n && l < k)
        {
            result = result + (mul * arr[i]);
            i++;
            l++;
        }
        mul++;
    }

    cout << result << "\n";

    return 0;
}
