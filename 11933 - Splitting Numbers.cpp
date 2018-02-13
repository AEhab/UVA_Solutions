#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        bool f=0;
        int n;
        cin >> n;
        if(!n)
            return 0;
            int now = 1,m=0,x=0;
        while(n)
        {
            if (n&1&&f)
            m+=now,f=0;
            else if (n&1)
            x+=now,f=1;
            n>>=1;
            now*=2;
        }
        cout<< x <<" " << m <<"\n";
    }
    return 0;
}
////////////////////////
//         #or
//////////////////////////////////////
/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        bool f=0;
        int n;
        cin >> n;
        if(!n)
            return 0;
        string str = bitset<32>(n).to_string();
        string str1,str2;
        for(int i=(int)str.size()-1;i>=0;i--)
        {
            if(str[i]=='1'&& f)
            str1='1'+str1,f=0,str2='0'+str2;
            else if (str[i]=='1')
             str2='1'+str2,f=1,str1='0'+str1;
            else
               str1='0'+str1,str2='0'+str2;
        }
       int  m=0,now=1;
        for (int i=(int)str2.size()-1;i>=0;i--)
        {
            if(str2[i]=='1')
            m+=now;
            now*=2;
        }
        cout << m << " " ;

        m=0,now=1;
        for (int i=(int)str1.size()-1;i>=0;i--)
        {
            if(str1[i]=='1')
            m+=now;
            now*=2;
        }
        cout<< m <<"\n";
    }
    return 0;
}
*/
