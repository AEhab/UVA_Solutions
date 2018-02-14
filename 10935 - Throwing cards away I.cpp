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
        queue <int> qu;
        for(int i=1;i<n+1;i++)
            qu.push(i);
            cout <<"Discarded cards:";
        while(qu.size()>1)
        {
            if(qu.size()!=n)
                cout <<",";
            cout << " " << qu.front();
            qu.pop();
            qu.push(qu.front());
            qu.pop();
        }
        cout <<"\nRemaining card: "<<qu.front()<<"\n";
    }

    return 0;
}
