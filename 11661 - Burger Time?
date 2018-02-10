#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L = 1;
    while(L)
    {
        cin >> L;
        if(!L)
            break;
        char a,c='0';
        int ans = L,temp=0;
        string str;
        cin >> str;
        for(int i=0;i<L;i++)
        {
            a=str[i];
            if(a=='Z')
            {
                ans = 0;
                break;
            }
            else if (a=='R')
            {
                if(c=='D'&&temp<ans)
                ans=temp,temp=0;
                else
                temp = 0;
                temp++;
                c='R';
            }
            else if (a == 'D')
            {
                if(c=='R'&&temp<ans)
                ans=temp,temp=0;
                else
                temp = 0;
                temp++;
                c='D';
            }
            else if(c=='D'||c=='R')
                temp++;
        }
        cout <<ans <<endl;
    }
    return 0;
}
