#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    map<int, int> mape;
    while(t--)
    {
        int n, max = -1;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            cin >> max;
            a.push_back(max);
        }
        max = -1;
        sort(a.begin(), a.end());
        for(int i = 2; i <= 100; i++)
        {
            int x = 0, y = n-1, count = 0;
            while(x < y)
            {
                if(a[x] + a[y] == i)
                {
                    x++;
                    y--;
                    count++;
                }
                else if(a[x] + a[y] > i)
                    y--;
                else if(a[x] + a[y] < i)
                    x++;
            }
            if(count > max)
                max = count;
        }
        cout << max << "\n";
    }
    return 0;
}