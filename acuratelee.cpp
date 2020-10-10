#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define pb push_back
using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag = 0, count = 0, ind = 0, j;
        vector<int> v, v1;
        char f = '0', c = '1';
        cin >> n;
        string s;
        cin >> s;
        count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
                break;
            else
                v.pb(1);
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == '0')
                break;
            else
                v1.pb(1);
        }
        if(v.size() + v1.size() == n)
            cout << s << "\n";
        else if(v.size() + v1.size() == 0)
            cout << "0\n";
        else
        {
            for(int i = 0; i < v.size(); i++)
                cout << "0";
            cout << "0";
            for(int i = 0; i < v1.size(); i++)
                cout << '1';
            cout << "\n";
        }

    }
    return 0;
}