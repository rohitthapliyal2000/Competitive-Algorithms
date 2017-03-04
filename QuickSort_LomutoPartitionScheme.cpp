#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &a , int &b)
    {
    int temp = a;
    a = b;
    b = temp;
}

int quickSort(int arr[], int n, int low, int high)
    {
    int pivot = arr[high];
    int i = low - 1 , j;
    for(j = low; j < high; j++)
        {
        if(arr[j] <= pivot)
            {
            i = i + 1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[j]);
    return i+1;
}

void partition(int arr[], int n, int low, int high)
    {
    if(low < high)
        {
        int pivot = quickSort(arr,n,low,high);
        partition(arr,n,low,pivot - 1);
        partition(arr,n,pivot + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    partition(arr,n,0,n-1);
    for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
    return 0;
}
