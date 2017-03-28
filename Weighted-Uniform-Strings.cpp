#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string str;
    cin >> str;
    long counter;
    vector <bool> arr(10 * 1000 * 1000);
    long i = 0;
    while(i < str.size())
    {
        arr[(str[i] - 96)] = true;
        counter = 2;
        while( i < str.size() && str[i] == str[i+1])
        {
            i++;
            arr[counter*(str[i] - 96)] = true;
            counter++;
        }
        i++;
    }
    i = 0;
    long n;
    cin >> n;
    for(long j = 0; j < n; j++)
    {
        long x;
        cin >> x;
        if(arr[x]){ cout << "Yes" << endl; }
        else
            cout << "No" << endl;

    }
    return 0;
}
