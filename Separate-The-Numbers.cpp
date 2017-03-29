#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void check(string str)
{
    int len = str.size() / 2 , a;
    string copy;
    string temp1 = "";
    string temp2 = "";
    int ln = 1, l = ln;
    while(ln <= len+1)
    {
        int i = 0 , flag = 0;
        int nine_flag = 1;
        while(i < str.size())
        {
            temp1 = "";
            temp2 = "";
            l = ln;
            while(l)
            {
                temp1 = temp1 + str[i];
                l--;
                if(str[i] != '9')
                    nine_flag = 0;
                i++;
            }
            if(i == 0+ln)
            {
                copy = temp1;
            }
            if(temp1[0] == '0')
            {
                flag = 1;
                break;
            }
            if(nine_flag == 1 && str[i] == '1')
            {
                ln++;
                l = ln;
            }
            else if(nine_flag == 1 && str[i] != '1')
            {
                l = ln+1;
            }
            else
                l = ln;
            nine_flag = 1;
            int save = i;
            while(l)
            {
                temp2 = temp2 + str[i];
                l--;
                if(str[i] != '9')
                    nine_flag = 0;
                i++;
            }
            if(temp2[0] == '0')
            {
                flag = 1;
                break;
            }
            if(i < str.size())
                i = save;
            if(atoi(temp2.c_str()) - atoi(temp1.c_str()) != 1)
            {
                    flag = 1;
                    break;
            }
            if(nine_flag == 1)
                l = ln + 1;
            else
                l = ln;
        }
        ln++;
        if(flag == 0)
        {
            cout << "YES " << copy <<endl;
            return ;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        string str;
        cin >> str;
        check(str);
    }
    return 0;
}
