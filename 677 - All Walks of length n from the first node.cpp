#include <bits/stdc++.h>

using namespace std;
int x[100][100];
vector <int> withme;
set <  vector  <int> > res;
map <int,int> withmap;
void walkn (int n,int len,int i,int j,int now)
{

    if (now == len)
    {
         if(withmap[i+1]==0)
        {
            withmap[i+1]++;
            withme.push_back(i+1);
            res.insert(withme);
            withme.pop_back();
             withmap[i+1]--;
        }
       return;
    }

    if(j==n)
        return;
    walkn(n,len,i,j+1,now);
    if (x[i][j]==1)
    {
        if(withmap[i+1]==0)
        {
            withmap[i+1]++;
            withme.push_back(i+1);
            walkn(n,len,j,0,now+1);
            withme.pop_back();
            withmap[i+1]--;
        }
        else
            return;

    }

}
int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    int temp = -9999;
    bool f=0;
    while (true)
    {
        if(f)
        cout << "\n";
        f=1;
        res.clear();
        withme.clear();
        withmap.clear();
        int n,l;
       if(temp==-9999)
       cin >> n >> l;
       else
        cin >>l;
       for(int i=0;i<n;i++)
       {
           for (int j=0;j<n;j++)
            cin >> x[i][j];
       }
      walkn(n,l,0,0,0);
      for(set <vector<int> > ::iterator it = res.begin(); it != res.end() ; it++)
      {
          cout <<"(";
          for(int i=0;i<(int)(*it).size();i++)
          {
              if(i==0)
              cout<<(*it)[i];
              else
                cout << "," <<(*it)[i];
          }
          cout <<")\n";
      }
      if(res.size()==0)
        cout << "no walk of length "<<l<<"\n";
        if(scanf("%d ",&temp) == EOF)
        break;
    }
    return 0;
}
