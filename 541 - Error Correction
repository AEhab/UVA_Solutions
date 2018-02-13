#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    while(1)
    {
        int n;
        cin >> n;
        if(!n)
            break;
        vector < int > col(n,0),raw(n,0);
        int rawodd=0,colodd=0,x=0,y=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int xx;
                cin >>xx;
                raw[i]+=xx;
                col[j]+=xx;
            }
            if(raw[i]&1)
                rawodd++,x=i+1;
        }

        for(int i=0; i<n; i++)
        {
            if(col[i]&1)
                colodd++,y=i+1;
        }
        if(colodd >1||rawodd>1||colodd+rawodd==1)
            cout <<"Corrupt\n";
        else if (colodd && rawodd)
            cout << "Change bit (" << x << "," <<y<<")\n";
        else
            cout <<"OK\n";
    }

    return 0;
}
