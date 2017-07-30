#include<bits/stdc++.h>
using namespace std;

int bsearch1(int arr[], int left, int right, int key, int n)
{
	int flag = 0, ans;
	while(left <= right)
	{
		int mid = (left+right)/2;
		if(arr[mid] == key && mid == 0)
		{
			return mid+1;
		}
		else if(arr[mid] == key && arr[mid-1] < key)
		{
			return mid+1;
		}
		else if(arr[mid] == key)
		{
			flag = 1;
			right = mid-1;
		}
		else if(arr[mid] > key)
		{
			right = mid-1;
		}
		else
		{
			left = mid+1;
		}
	}
	return -1;
}

int bsearch2(int arr[], int left, int right, int key, int n)
{
	int flag = 0, ans;
	while(left <= right)
	{
		int mid = (left+right)/2;
		if(arr[mid] == key && mid == n-1)
		{
			return mid+1;
		}
		else if(arr[mid] == key && arr[mid+1] > key)
		{
			return mid+1;
		}
		else if(arr[mid] == key)
		{
			left = mid+1;
		}
		else if(arr[mid] > key)
		{
			right = mid-1;
		}
		else
		{
			left = mid+1;
		}
	}
	return -1;
}


int main()
{
	int tests;
	cin >> tests;
	while(tests--)
	{
		int n;
		cin >> n;
		int A[n];
		for(int i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		int key;
		cin >> key;
		int first, last;
		first = bsearch1(A, 0, n-1, key, n);
		if( first == -1)
		{
			cout << "Not found " << endl;
			return 0;
		}
		last = bsearch2(A, 0, n-1, key, n);
		cout << last-first+1 << endl;
	}
}
		
