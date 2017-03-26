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
    string s;
    cin >> s;
    long n , counter;
    cin >> n;
    long length = s.size();
    long rem = n;
    n = n % length;
    rem = rem - n;         // n will now be the remainder after mod. rem will be the quotient. Ex: n = 10. str.size()=3. After these steps: n = 1, rem = 9.
    long a_count = 0;
    for(long i = 0; i < length; i++)
    {
        if(s[i] == 'a')
            a_count++;
    }
    long times = rem / length;   //times is the number of times we got to multiply the count of a. If rem = 9, times is 3(str.size() = 3).
    counter = times * a_count;   //multiplication of a(s) found with the quotient.
    for(long i = 0; i < n; i++)
    {
        if(s[i] == 'a')
            counter++;           //adding the number of a(s) to the remainder.
    }
    cout << counter;
    return 0;
}
