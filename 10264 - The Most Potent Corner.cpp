//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    int n ;
    while(scanf("%d ",&n)!=EOF)
    {
        vector <int> vec(pow(2,n));
        unordered_map <int,int> sum;
        int m = pow(2,n);
        for(int i=0; i<m; i++)
            cin >> vec[i];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                //cout << (1^2) <<endl;
                if( __builtin_popcount((i^j)) == 1)
                    sum[i]+=vec[j];
            }
        }
        int mx=0;
         for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                    int now=0;
                if( __builtin_popcount((i^j)) == 1)
                    now = sum[i]+sum[j];
                    mx=max(now,mx);
            }
        }
        cout << mx <<endl;
    }
    return 0;
}
