#include <bits/stdc++.h>

using namespace std;

int main() {
    while(1) {
        int n;
        cin >> n;
        map < set <int>,int > mp;
        if(n==0)
            break;
        for(int i=0; i<n; i++) {
            set<int> st;
            for(int j=0; j<5; j++) {
                int x;
                cin >> x;
                st.insert(x);
            }
            mp[st]++;
        }
        map <int,int> ans;
        for( map < set <int>,int > :: iterator it=mp.begin(); it!=mp.end(); it++)
            ans[it->second]++;

        map <int,int>:: reverse_iterator it = ans.rbegin();

        cout << it->first * it->second <<endl;
    }
    return 0;
}
