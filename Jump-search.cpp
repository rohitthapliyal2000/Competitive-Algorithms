//CPP code for Jump search
#include <bits/stdc++.h>
using namespace std;

int comp = 0;

void lsearch(int arr[], int left, int right, int key)
{
	for(int i = left; i <= right; i++)
	{
	    comp++;
		if(arr[i] == key)
		{
			cout << "Found" << endl;
			cout << "Comparisons : " << comp;
			return ;
		}
	}
	cout << "Not Found" << endl;
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
			if(i < n && arr[i] <= key)
			{
			    comp++;
				if(arr[i] == key)
				{
				    flag = 1;
				    cout << "Found\n";
				    cout << "Comparisons : " << comp;
					break;
				}
				if(i == n-1)
				{
					break;
				}
				save = i;
			}
			else
			{
			    comp++;
				flag = 1;
				lsearch(arr, save, i, key);
				break;
			}
		}
		if(!flag)
		{
			cout << "Not Found" << endl;
		}
	}
}
