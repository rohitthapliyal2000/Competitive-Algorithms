#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int len ;
int store[1000];
int index1 = 0;

void check(string str, char a, char b)
{
    string temp;
    for(int i = 0; i < len; i++)
    {
        if(str[i] == a || str[i] == b)
        {
            temp = temp + str[i];
        }
    }
    int temp_flag = 0;
    for(int i = 0; i < temp.size()-1; i++)
    {
        if(temp[i] == temp[i+1])
            temp_flag = 1;
    }
    if(temp_flag == 0)
        store[index1++] = temp.size();

}

int main(){
    cin >> len;
    string str;
    cin >> str;
    char arr[len];
    int j = 0;
    int flag;
    for(int i = 0; i < len; i++)
    {
        if(arr != "")
        {
            flag = 0;
            for(int k = 0; k <= len; k++)
            {
                if(arr[k] == str[i])
                {
                    flag = 1;
                }
            }
        }
        if(flag == 0)
            arr[j++] = str[i];
    }

    for(int i = 0; i < len; i++)
    {
        for(int j = 1; j < len; j++)
        {

            if(arr[i] != arr[j] && arr[i] >= 'a' && arr[i] <= 'z' && arr[j] >= 'a' && arr[j] <= 'z')
            {
                check(str, arr[i], arr[j]);
            }
        }
    }
    int max = 0;
    for(int i = 0; i < index1; i++)
    {
        if(store[i] > max)
            max = store[i];
    }
    cout << max;
    return 0;
}
