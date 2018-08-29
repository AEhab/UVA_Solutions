#include <bits/stdc++.h>

using namespace std;

int main() {
    set <pair < long long , int > > st;
    unordered_map <int, long long> mp;
    while(1) {
        string str;

        long long id, p;
        cin >> str ;
        if(str == "#")
            break;
        cin  >> id >> p;
        st.insert({p,id});
        mp[id] = p;
    }
    long long k;
    cin >> k ;
    auto it = st.begin();
    for(int i = 0; i <k; i++,it++) {
        cout << it->second <<endl;
        st.insert({it->first + mp[it->second],it->second});
    }
    return 0;
}
