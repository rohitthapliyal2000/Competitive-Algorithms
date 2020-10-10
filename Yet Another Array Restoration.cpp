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
        ll n, x, y;
        cin >> n >> x >> y;
        ll a[n], k, c;
        ll d = y-x;
        c = n-1;
        while(d%c)
            c--;
        ll r = d/c;
        k = n - c;
        k--;
        if(x - r*k > 0)
        {
            x = x - r*k;
            for(ll i = 0; i < n; i++)
            {
                a[i] = x;
                x = x+r;
            }
        }
        else
        {
            while(x - r*k <= 0)
                k--;
            x = x - r*k;
            for(ll i = 0; i < n; i++)
            {
                a[i] = x;
                x = x+r;
            }
        }
        for(ll i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}