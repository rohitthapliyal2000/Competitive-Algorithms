#include <iostream>
using namespace std;

int abs(int a)
{
    return ((a >= 0)? a : -a);
}

int main()
{
    int n;
    cin >> n;
	while(n != 0)
	{
		long long int arr[n];
		for(int i = 0; i < n ; i++)
		{
			cin >> arr[i];
		}
		long long sum = 0;
		for(int i = 1; i < n; i++)
		{
			arr[i] = arr[i] + arr[i-1];
			sum = sum + abs(arr[i-1]);
		}
		cout << sum << endl;
		cin >> n;
	}
	return 0;
}
