#include <iostream>
using namespace std;

void merge(int arr[], int n, int left, int mid, int right, int brr[])
{
	int i = left, j = mid+1;
	
	int k = left;
	while(i <= mid && j <= right)
	{
	    if(arr[i] <= arr[j])
	        brr[k++] = arr[i++];
	    else
	        brr[k++] = arr[j++];
	}
	
	while(i <= mid)
	    brr[k++] = arr[i++];
	while(j <= right)
	    brr[k++] = arr[j++];
	    
	for(int a = left; a < k; a++)
	    arr[a] = brr[a];
}	

void mergeSort(int arr[], int n, int left, int right, int brr[])
{
    if(left < right)
    {
    	int mida = (left + right)/2;
    	mergeSort(arr, n, left, mida, brr);
    	mergeSort(arr, n, mida+1, right, brr);
    	merge(arr, n, left, mida, right, brr);
    }
}

int main() 
{
	int n;
	cin >> n;
	int arr[n], brr[n];
	for(int i = 0; i < n; i++)
	    cin >> arr[i];
	mergeSort(arr, n, 0, n-1, brr);
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

