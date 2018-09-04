//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b,n;
    while(1)
    {
        cin >> b >> n ;
        if(!b&&!n)
            break;
        vector <int> res(b+1,0),deb(b+1,0),cre(b+1,0);
        int a;
        for(int i=1; i<=b; i++)
            cin >> a,res[i]=a;
        int b1,b2,mon;
        for(int i=0; i<n; i++)
        {
            cin >> b1 >> b2 >> mon;
            deb[b1]-=mon;
            cre[b2]+=mon;
        }
        int i;
        for(i=1; i<=b; i++)
        {
            if(cre[i]+res[i]+deb[i]<0)
                break;
        }
        i==b+1? cout << "S\n": cout << "N\n";
    }
    return 0;
}
