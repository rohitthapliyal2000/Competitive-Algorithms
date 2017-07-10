#include <iostream>
using namespace std;

int main()
{
	int tests;
	cin >> tests;
	while(tests--)
	{
		int n;
		cin >> n;
		int i = 0, arr[n];
		for(; i < n; i++)
			cin >> arr[i];
		int key;
		cin >> key;
		i = 0;
		for(; i < n; i++)
		{
			if(arr[i] == key)
			{
				cout << "Present: " << i+1 << endl;
				break;
			}
		}
		if(i == n)
			cout << "Not Present" << endl;
	}
}
			
	
	
