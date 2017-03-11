
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr,arr+n);
    int index_check,i = 0,counter = 0,coverage;
    while(i <= n-1)
        {
        if(arr[i] == arr[i+1])
            {
            i++;
            continue;
        }
        coverage = arr[i] + k;

        index_check = i;
        while(arr[index_check+1] <= coverage && index_check <= n-1)
            {
            index_check++;
        }
        i = index_check;
        coverage = k + arr[i];
        while(arr[index_check+1] <= coverage && index_check <= n-1)
            {
            index_check++;
        }
        i = index_check+1;
        counter++;
    }
    cout << counter;

    return 0;
}
