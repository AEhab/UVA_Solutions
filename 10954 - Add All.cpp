//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    while(1)
    {
        multimap <int,int>mp;
        int n,cost=0;
        cin >> n;
        if(!n)break;
        priority_queue <int> pq1;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            pq1.push(x*-1);
        }
        int j=0;
        while(pq1.size()>1)
        {
            int sum = pq1.top();
            pq1.pop();
            sum+=pq1.top();
            pq1.pop();
            cost+=sum;
            pq1.push(sum);
        }
        cout <<cost*-1<<endl;
    }
    return 0;
}
