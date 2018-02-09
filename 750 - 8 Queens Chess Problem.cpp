#include <bits/stdc++.h>

using namespace std;
vector <int> withme(9),col;
map < int ,int > di1,di2;
set < vector<int> >ans ;
int x,y;
void tryy(int ind,int row)
{
    if (ind == 9 )
    {
         ans.insert(col);
         return;

    }
    if ( row == 9)
        return;

    if (y == ind)
    {
        col.push_back(x);
        tryy(ind+1,1);
        col.pop_back();
    }
    else if (withme[row] == 0 && di1[ind-row] == 0 && di2[row+ind] == 0 )
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
    if(ind != y)
    tryy(ind,row+1);
}

int main()
{
   // freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    int n;
    cin >> n;
    while(n--)
    {
        di1.clear();
        di2.clear();
        col.clear();
        ans.clear();
        withme.clear();
        withme.resize(9,0);
        scanf(" %d %d",&x,&y);
        withme[x]=1;
        di1[y-x]++;
        di2[x+y]++;
        tryy(1,1);
        cout << "SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n";
        int i=0;
        for (set <vector <int> > ::iterator it=ans.begin();it!=ans.end();it++,i++)
        {
             if (i+1 < 10)
                cout << " ";
             cout << i+1 << "     ";
            for(int j = 0 ; j < (int)(*it).size();j++)
                cout << " " << (*it)[j];
            cout << "\n";
        }
        if (n != 0)
        cout << "\n";
    }
    return 0;
}
