#include <bits/stdc++.h>

using namespace std;

vector <int> in(9),withme(9),col;
map < int ,int > di1,di2;
map <int,int> place ;
int best;

void tryy(int ind,int row)
{
    if (ind == 9 )
    {
        int temp =0;
         for (int i = 0 ;i < (int) col.size();i++)
         abs( in[i] - col[i])  == 0 ? temp = temp : temp++ ;
         if(best > temp)
            best = temp;
         return;
    }
    if ( row == 9)
        return;
    if (withme[row] == 0 && di1[ind-row] == 0 && di2[row+ind] == 0 )
    {
        withme[row]=1;
        col.push_back(row);
        di1[ind-row]++;
        di2[row+ind]++;
        tryy(ind+1,1);
        di1[ind-row]--;
        di2[row+ind]--;
        col.pop_back();
        withme[row]=0;
    }
    tryy(ind,row+1);
}

int main()
{
 //   freopen("in.in","r",stdin);
   // freopen("out.out","w",stdout);
    int co=1;
    while(scanf("%d ",&in[0]) != EOF)
    {
        di1.clear();
        di2.clear();
        col.clear();
        place.clear();
        best = 10;
        withme.clear();
        withme.resize(9,0);

        for (int i=1 ;i<8 ;i++)
        cin >> in[i];

        tryy(1,1);
        cout <<"Case " <<co << ": " <<best <<"\n";
        co++;
    }
    return 0;
}
