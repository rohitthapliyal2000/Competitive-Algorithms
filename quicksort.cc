#include <iostream>
using namespace std;

void swap(int &a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    
    int i = left-1;
    for(int j = i; j < right; j++)
    {
        if(arr[j] < pivot)
        {
            i = i + 1;
            swap(arr[i], arr[j]);
        }
    }
    if(arr[right] < arr[i+1])
        swap(arr[right], arr[i+1]);
        
    return i+1;
}

void quicksort(int arr[], int left, int right)
{
    if(left < right)
    {
        int part = partition(arr, left, right);
        
        quicksort(arr, left, part-1);
        quicksort(arr, part+1, right);  
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n-1);
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
