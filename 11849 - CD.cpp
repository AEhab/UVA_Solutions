//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main() {
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
   int n,m;
   
   while(1){
        int x,ans=0;
   unordered_set <int> st;
   cin >> n >> m;
   if ((n|m) == 0)
    break;
   for(int i=0;i<n;i++){
    cin >> x;
    st.insert(x);
   }
  for(int i=0;i<m;i++){
    cin >> x;
    if (st.find(x) != st.end())
        ans++;
    }
    cout << ans <<endl;
   }
    return 0;
}
