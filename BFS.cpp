#include <bits/stdc++.h>
using namespace std;

int visited[1001];
int counter;

void bfs(int node, int dest, vector <int> arr[])
{
    for(int i = 1; i <= 1000; i++)
    {
        visited[i] = 0;
    }
    vector <int> record(1001);
    list <int> q;
    visited[node] = 1;
    q.push_back(node);
    while(!q.empty())
    {
        int s = q.front();
        q.pop_front();
        for(int i = 0; i < arr[s].size(); i++)
        {
            if(visited[arr[s][i]] == 0)
            {
                visited[arr[s][i]] = 1;
                q.push_back(arr[s][i]);
                record[arr[s][i]] = s;
            }
        }
    }
    if(visited[dest] == 0)
    {
        cout << "-1 ";
        return ;
    }
    int i = dest;
    counter = 6;
    while(record[i] != node)
    {
        i = record[i];
        counter += 6;
    }
    
}

int main() 
{
    int tests;
    cin >> tests;
    while(tests --)
    {
        int nodes, edges, u, v;
        cin >> nodes >> edges;
        vector <int> arr[nodes+1];
        for(int i = 0; i < edges; i++)
        {
            cin >> u >> v;
            arr[u].push_back(v);
            arr[v].push_back(u);
        }
        int s;
        cin >> s;
        for(int i = 1; i <= nodes; i++)
        {
            if(i == s)
            {
                continue;
            }
            counter = 0;
            bfs(s, i, arr);
            if(counter)
            {
                cout << counter << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

