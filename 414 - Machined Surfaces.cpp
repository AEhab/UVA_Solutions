#include <bits/stdc++.h>
using namespace std;

int main()
{
      //freopen("in.in","r",stdin);
    //  freopen("out.out","w",stdout);
    while(1)
    {
        int n;
        scanf("%d ",&n);
        if(n==0)
            break;
        int ma=0,ans=0;
        vector <int> vec(n,0);

        for(int i=0; i<n; i++)
        {
            string str;
            getline(cin,str);
            for(int j=0;j<(int)str.size();j++)
                if(str[j]=='X')
                vec[i]++;
            ma=max(ma,vec[i]);
        }
        for(int i=0;i<n;i++)
           ans+= ma-vec[i];
        cout << ans <<endl;

    }
    return 0;

}
