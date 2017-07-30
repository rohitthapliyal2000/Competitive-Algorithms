#include<bits/stdc++.h>
using namespace std;

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
		{
			cin >> arr[i];
		}
		int i = 0, j = 0, k = 0, flag = 0;
		for(k = 0; k < n; k++)
		{
			i = 0, j = n-1;
			while(i <= j)
			{
				if(arr[i] + arr[j] == arr[k])
				{
					flag = 1;
					break;
				}
				else if(arr[i] + arr[j] > arr[k])
				{
					j--;
				}
				else
				{
					i++;
				}
			}
			if(flag)
				cout << "1 : " << arr[i] << " 2 : " << arr[j] << " 3 : " << arr[k] << endl;
		}
	}
}
