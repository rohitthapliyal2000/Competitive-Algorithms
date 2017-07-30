#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tests;
	cin >> tests;
	while(tests--)
	{
		int n ;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr+n);
		int key;
		cin >> key;
		int i = 0, j = 0;
		while(i <= n-1 || j <= n-1)
		{
			if(abs(arr[i] - arr[j]) == key)
			{
				cout << "Pair : " << arr[i] << " " << arr[j] << endl;
				j++;
			}
			else if(abs(arr[i] - arr[j]) < key)
			{
				j++;
			}
			else
			{
				i++;
			}
		}
	}
}
			
