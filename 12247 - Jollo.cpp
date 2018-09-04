//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    while(1)
    {
        bool c[52+1]= {0};
        int x[3],y[3],m;
        for(int i=0; i<3; i++)
            cin >> y[i],c[y[i]]=1;
        for(int i=0; i<2; i++)
            cin >> x[i],c[x[i]]=1;

        if(x[0]+x[1]+y[2]+y[0]+y[1] == 0)
            break;
        sort(x,x+2);
        sort(y,y+3);
        m=0;
        for(int i = 1 ; i<53; i++)
        {
            if((i==y[0]||i==y[1]||i==y[2])&&m>0)
                m--;
            if((i==x[0]||i==x[1]))
                m++;
        }
        if(m<=0)
            cout << "-1\n";
        else if(x[1]>y[2]&&(x[0]>y[2]))
        {
            int i=1;
            while(c[i]&&i<53)
                i++;
            if(i<53)
                cout <<i <<"\n";
            else
                cout <<"-1\n";
        }
        else if((x[1]>y[2]&&x[0]>y[1])||(y[2]>x[1]))
        {
            int i=1;
            m=0;
            while(i<53)
            {
                if(i==y[0]||i==y[1]||i==y[2])
                    m++;
                if(m==2)
                {
                    while(c[i]&&i<53)
                        i++;
                    if(i<53)
                        cout <<i <<"\n";
                    else
                        cout <<"-1\n";
                    break;
                }
                i++;
            }
        }
        else if (x[1]>y[2])
        {
            int i=1;
            m=0;
            while(i<53)
            {
                if(i==y[0]||i==y[1]||i==y[2])
                    m++;
                if(m==3)
                {
                    while(c[i]&&i<53)
                        i++;
                    if(i<53)
                        cout <<i <<"\n";
                    else
                        cout <<"-1\n";
                    break;
                }
                i++;
            }
        }
    }
    return 0;
}
