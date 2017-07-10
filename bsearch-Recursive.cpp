#include <bits/stdc++.h>
using namespace std;

int bsearch(int arr[], int left, int right, int key)
{
	
	if(left > right)
	{
		cout << "Not Found " << endl;
		return -1;
	}
	int mid = (left+right)/2;
	if(arr[mid] == key)
	{
		return mid+1;
	}
	else if(arr[mid] > key)
	{
		bsearch(arr, left, mid-1, key);
	}
	else
	{
		bsearch(arr, mid+1, right, key);
	}
}

int main()
{
	int tests;
	cin >> tests;
	while(tests--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		int key;
		cin >> key;
		cout << bsearch(arr, 0, n-1, key) << endl;	
	}
}
