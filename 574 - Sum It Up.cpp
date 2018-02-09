#include <bits/stdc++.h>

using namespace std;
vector <int> withme,x;
set <vector <int> > result;
void sumit( int n,int sum,int ind)
{
     if ( sum == n)
    {
        result.insert(withme);
        return;
    }
    if (ind == (int)x.size())
        return;
    withme.push_back(x[ind]);
    sumit(n,sum+x[ind],ind+1);
    withme.pop_back();
    sumit(n,sum,ind+1);
}
int main()
{
  //  freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    while (true)
    {
        withme.clear();
        result.clear();
        x.clear();
        int n,m;
        cin >> n >> m;
        if (n==0 && m==0)
            break;
        for (int i=0 ;i<m;i++)
        {
             int t;
             cin >> t;
             x.push_back(t);
        }
        sumit(n,0,0);
        cout << "Sums of " << n << ":\n";
        if((int)result.size()>0)
        {
            set < vector <int> > ::iterator it = result.end();
            do
            {
                it--;
                for(int i=0;i<(int) it->size();i++)
                {
                    if(i==0)
                    cout << (*it)[i];
                    else
                    cout<<"+"<<(*it)[i];
                }
                cout << "\n";
            }while(it != result.begin());
        }
        else
            cout << "NONE\n";
    }
    return 0;
}
