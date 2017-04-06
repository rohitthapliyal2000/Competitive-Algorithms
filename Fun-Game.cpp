#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while( t > 0)
    {
        int n;
        cin >> n;
        vector <int> arr(n);
        vector <int> brr(n);
        int num;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        vector <int> crr(n);
        for(int i = 0; i < n; i++)
        {
            crr[i] = arr[i] + brr[i];
        }
        /*for(int i = 0; i < n; i++)
        {
            cout << crr[i] << endl;
        }*/
        int sum1 = 0, sum2 = 0;
        int i = 0;
        int index1 = 0, index2 =0;
        int max,pos;
        vector <int> :: iterator it;
        while(i < n)
        {
            max = *max_element(crr.begin(), crr.end());
            it = find(crr.begin(), crr.end(), max);
            pos = it-crr.begin();
            //cout << "MAX : " << max << endl;
            sum1 = sum1 + arr[pos];
                        //cout << "SUM1 : " << sum1 << endl << endl;

            //arr.erase(arr.begin() + pos);
            crr[pos] = 0;
            arr[pos] = 0;
            //crr.erase(crr.begin() + pos);
            /*for(int i = 0; i < crr.size(); i++)
            {
                cout << crr[i] << endl;
            }*/
            i++;
            if(i >= n)
                break;
            max = *max_element(crr.begin(), crr.end());
            //cout << "MAX : " << max << endl;
            it = find(crr.begin(), crr.end(), max);
            pos = it-crr.begin();
            //cout << pos << endl;
            sum2 = sum2 + brr[pos];
                        //cout << "SUM2 : " << sum2 << endl << endl;

            //brr.erase(brr.begin() + pos);
            //crr.erase(crr.begin() + pos);
            brr[pos] = 0;
            crr[pos] = 0;
            i++;
        }
        if(sum1 == sum2)
        {
            cout << "Tie" << endl;
        }
        else if(sum1 > sum2)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
        t--;
    }
    return 0;
}
