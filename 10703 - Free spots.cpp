//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.in","r",stdin);
   //freopen("out.out","w",stdout);
    int n,w,h;
    bool f =0;
    while(1)
    {
        if(f)
            cout <<"\n";
        f=1;
        cin >> w >> h >> n;
        if(n+w+h==0)
            break;
        vector < vector <bool> > vec(w);
        for(int i=0; i<w; i++)
            vec[i].resize(h,0);
        for(int i=0; i<n; i++)
        {
            int x1,x2,y1,y2;
            cin >> x1 >> y1 >> x2 >>y2;
            for(int j=min(x1,x2)-1; j<max(x1,x2); j++)
            {
                for(int m = min(y1,y2)-1; m<max(y1,y2); m++)
                    vec[j][m]=1;
            }
        }
        long long  ans=0;
        for(int i=0; i<w; i++)
            for(int j=0; j<h; j++)
                ans+= (int) (vec[i][j] == 0);
                if(ans ==0)
        cout << "There is no empty spots.";
        else if (ans ==1)
             cout << "There is one empty spot.";
        else
        cout << "There are " << ans << " empty spots.";
    }
    return 0;
}
