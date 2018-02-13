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
        while(1)
        {
            int x;
            cin >> x;
            if (!x)
                break;
            stack <int> st;
            int j=1;
            for(int i=1; i<=n; i++)
            {
                while(x>j &&j<=n&&(st.empty() || x!=st.top()))
                st.push(j),j++;
                if(!st.empty()&&st.top() == x)
                st.pop();
                if(i<n)
                cin >> x,j++;
            }
            if(st.empty())
                cout <<"Yes\n";
            else
                cout <<"No\n";
        }
        cout <<"\n";
    }

    return 0;
}
