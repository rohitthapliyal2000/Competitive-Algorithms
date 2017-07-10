#include <bits/stdc++.h>
using namespace std;

void lsearch(int arr[], int left, int right, int key)
{
	for(int i = left; i <= right; i++)
	{
		if(arr[i] == key)
		{
			cout << i+1 << endl;
			return ;
		}
	}
	cout << "Not Found 1" << endl;
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
		int i, flag = 0, temp = 0;
		int key, save;
		cin >> key;
		while(i < n)
		{
			i = pow(2, temp)-1;
			temp++;
			if(i >= n)
			{
				i = n-1;
			}
			cout << "i:" << i << endl;
			if(i < n && arr[i] <= key)
			{
				if(arr[i] == key)
				{
					cout << i+1;
					break;
				}
				if(i == n-1)
				{
					break;
				}
				save = i;
			}
			else if(arr[i] >= key)
			{
				flag = 1;
				lsearch(arr, save, i, key);
				break;
			}
			else
			{
				break;
			}
			
		}
		if(!flag)
		{
			cout << "Not Found 2" << endl;
		}
	}
}
		
