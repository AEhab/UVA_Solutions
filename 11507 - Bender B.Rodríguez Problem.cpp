#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <string,int> zz,yy;
    zz["+x"]=0,zz["+z"]=1,zz["-x"]=2,zz["-z"]=3;
    yy["+x"]=0,yy["+y"]=1,yy["-x"]=2,yy["-y"]=3;
    map <int,string> zzn,yyn;
    zzn[0]="+x",zzn[1]="+z",zzn[2]="-x",zzn[3]="-z";
    yyn[0]="+x",yyn[1]="+y",yyn[2]="-x",yyn[3]="-y";
    while(1)
    {
        long long n;
        cin >> n;
        if(!n)
            break;
        string mystate = "+x",now;
        for(int i=0;i<n-1;i++)
        {
            cin >> now;
            if((mystate[1]=='z'||mystate[1]=='x')&&now[1]=='z')
            {
                if(now[0]=='+')
                mystate = zzn[(zz[mystate]+1+4)%4];
                else
                mystate = zzn[(zz[mystate]-1+4)%4];
            }
            else if((mystate[1]=='y'||mystate[1]=='x')&&now[1]=='y')
            {
                if(now[0]=='+')
                mystate = yyn[(yy[mystate]+1+4)%4];
                else
                mystate = yyn[(yy[mystate]-1+4)%4];
            }
        }
        cout << mystate<<endl;
    }
    return 0 ;
}
