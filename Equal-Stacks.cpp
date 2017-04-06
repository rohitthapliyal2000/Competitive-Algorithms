#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int arr1[n1];
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    int arr2[n2];
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    int arr3[n3];
    for(int i = 0; i < n3; i++)
    {
        cin >> arr3[i];
        sum3 += arr3[i];
    }
    if(sum1 == sum2 && sum1 == sum3)
    {
        cout << sum1 ;
        return 0;
    }
    int i = 0, j = 0, k = 0;
    while(sum1 != sum2 || sum1 != sum3)
    {
        if(sum1 > sum2 || sum1 > sum3)
            sum1 = sum1 - arr1[i++];
        if(sum2 > sum1 || sum2 > sum3)
            sum2 = sum2 - arr2[j++];
        if(sum3 > sum1 || sum3 > sum2)
            sum3 = sum3 - arr3[k++];
    }
    cout << sum1;
    return 0;
}

