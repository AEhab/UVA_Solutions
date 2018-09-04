//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;
vector <int> input,withme,best;
int bestlength = 0;

void noofsongs (int sum,int ind,int n,int tracks)
{
    if(sum > n )
    return;
    if (bestlength < sum || (bestlength == sum && withme.size() > best.size()))
    {
        best = withme;
        bestlength = sum;
    }
    if(ind >= tracks || sum == n)
    return;
    noofsongs(sum,ind+1,n,tracks);
    if ( sum + input[ind] <= n)
    {
        withme.push_back(input[ind]);
        noofsongs(sum + input[ind],ind+1,n,tracks);
        withme.pop_back();
    }
}
int main()
{
    //freopen("in.in","r",stdin);
   //freopen("out.out","w",stdout);
    int n;
    while (scanf("%d",&n) != EOF)
    {
        bestlength = 0;
        withme.clear();
        best.clear();
        int track,sum=0,ind=0;
        scanf("%d",&track);
        input.resize(track);
        for (int i=0;i<track;i++)
            scanf("%d",&input[i]);
     noofsongs(sum,ind,n,track);
        for (int i=0;i<(int)best.size();i++)
            cout << best[i] << " ";
        cout << "sum:" << bestlength<<endl;
    }

    return 0;
}
