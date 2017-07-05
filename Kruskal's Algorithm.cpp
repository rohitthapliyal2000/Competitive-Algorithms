#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector < pair < int, pair <int, int> > > arr;
int brr[3001+1];

int root(int i)
{
    if(brr[i] == -1)
        return i;
    return root(brr[i]);
}

void start()
{
    for(int i = 0; i <= 3000; i++)
    {
        brr[i] = -1;
    }
}

bool cycle(int u, int v)
{
    if(root(u) == root(v))
    {
        return true;
    }
    int uset = root(u);
    int vset = root(v);
    brr[uset] = vset;
    return false;
}

int main() 
{
    int nodes, edges, u, v, w;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        arr.push_back(make_pair(w,(make_pair(u,v))));
    }
    sort(arr.begin(), arr.end());
    start();
    int counter = 0, sum = 0;
    for(int i = 0; i < edges; i++)
    {
        if(!cycle(arr[i].second.first, arr[i].second.second))
        {
            counter++;
            sum += arr[i].first;
        }
        if(counter == nodes-1)
            break;
    }
    cout << sum;
    return 0;
}

