#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
char arr[10];
int check;
int counter = 0;
int n;
void generate(int counter)
    {
    if(counter==n)
    {
        printf("%s",arr);
        cout << endl;
    }
    else

        if( counter == 0 )
        {
            for(int i = 97 ; i <= 122; i++)
            {
                if(i == 121 )
                    continue;
                arr[counter] = i;
                generate(counter+1);
            }
        }
         else if(arr[counter-1] == 'i' || arr[counter-1] == 'a' || arr[counter-1] == 'e' || arr[counter-1] == 'o' || arr[counter-1] == 'u')
                {
                for(int k = 97 ; k <= 122; k++)
                    {
                    if( k != 97 && k != 101 && k != 105 && k != 121 && k != 111 && k != 117)
                     {
                         arr[counter] = k;
                         generate(counter+1);

                     }   
                }
            }
            else
                {
                    for(int l = 97; l <= 122; l++)
                    {
                        if(l == 97 || l == 101 || l == 105 || l == 111 || l == 117)
                        {
                            arr[counter] = l;
                            generate(counter+1);
                        }
                        else
                            continue;
                    }
            }
}
int main()
{
    cin >> n;
    check = n;
    generate(counter);
    return 0;

}

