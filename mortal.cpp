#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define llu unsigned long long int
#define ll long long int
#define fore(i, n) for(auto i = 0; i < n ; i++)
#define forb(i, n) for(auto i = n-1; i >= 0; i++)
#define pair(k, z) pair<k, z>
#define vec(k) vector<k>
#define map(k, z) map<k, z> 
#define set(k) set<k>
#define gcd(a, b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define pb push_back
#define ins insert
using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        ll n, x;
        ll an = 0, f = 1, i;
        cin >> n;
        vec(ll) a;
        ll c = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> x;
            a.pb(x);
        }
        if(n == 1)
        {
            if(a[0] == 1)
                cout << '1' << "\n";
            else
                cout << "0\n";
        }
        else
        {
            if(a[0] == 1)
                an = 1;
            for(i = 1; i < n; i++)
            {
                if(a[i] == 1)
                    c++;
                else
                {
                    an = c/3 + an;
                    c = 0;
                }
            }
            cout << an + c/3<< "\n";
        }
        
    }
    return 0;
}