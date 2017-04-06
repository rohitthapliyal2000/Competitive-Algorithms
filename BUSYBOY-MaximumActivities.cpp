#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    while(tests > 0)
    {
        vector <pair <int,int> > p;
        int n , num1, num2;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> num1 >> num2;
            p.push_back(make_pair(num2,num1));
        }
        sort(p.begin(),p.end());
        int counter = 1;
        int j;
        for(int i = 0; i < p.size()-1; i++)
        {
            for(j = i+1; j < p.size(); j++)
            {
                if(p[j].second >= p[i].first)
                {
                    counter++;
                    i = j-1;
                    break;
                }
            }
            if(j == p.size())         // After this activity, no further activity can be done. Since, end time are sorted, no activity can be done anyhow.
                break;

        }
        cout << counter << endl;
        tests--;
    }
}
