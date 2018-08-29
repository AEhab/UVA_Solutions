#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
  //  freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    while(scanf("%d",&n)!=EOF) {
        queue <int> q;
        priority_queue <int> pq;
        stack<int> st;
        int q1=0,pq1=0,st1=0,wr=0,c=0;
        for(int i=0; i<n; i++) {
            int x,y;
            cin >> x >> y;
            if(x==1) {
                q.push(y);
                pq.push(y);
                st.push(y);
            } else {
                c++;
                if(st.empty()) {
                    wr = true;
                } else {
                    st.top()  == y ? st1++ : st1--;
                    pq.top()  == y ? pq1++ : pq1--;
                    q.front() == y ? q1++ : q1--;
                    st.pop();
                    pq.pop();
                    q.pop();
                }
            }
        }
        if(wr||(st1!=c &&  pq1 != c &&q1!=c))
            cout << "impossible\n";
        else if (st1==c && st1!=pq1 && st1!=q1)
            cout << "stack\n";
        else if (q1==c && q1!=pq1 && q1!=st1)
        cout << "queue\n";
        else if (pq1==c && pq1!=q1 && pq1!=st1)
        cout << "priority queue\n";
        else
            cout <<"not sure\n";
    }
    return 0;
}
