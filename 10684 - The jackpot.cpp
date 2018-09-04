//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    int n;

    while(1)
    {
        cin >> n ;
        if (!n)
            break;
        vector <long long  int >  in(n),sum;
        for (int i=0 ;i<n ;i++)
        cin >> in[i];
        long long int best=0;
        for(int i=0;i<n;i++)
        {
            if(best + in[i] <0)
            best=0;
            else
            best += in[i];
             sum.push_back(best);
        }
        sum.push_back(best);
        sort(sum.rbegin(),sum.rend());
        if (sum[0]>0)
        cout << "The maximum winning streak is "<<sum[0] << ".\n";
        else
            cout <<"Losing streak.\n";
    }
    return 0;
}
