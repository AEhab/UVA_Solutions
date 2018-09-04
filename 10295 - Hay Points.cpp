//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main(){
 int n,m;
  //freopen("in.in","r",stdin);
   // freopen("out.out","w",stdout);
 cin >> n >>m;
 map <string,long long> mp;
 for(int i=0;i<n;i++)
 {
     string str;
     long long mo;
     cin >> str >> mo;
     mp[str] = mo;
 }
 for(int i=0;i<m;i++){
    string str= " " ;
    long long ans=0;
    while(str!="."){
        cin >> str;
        if(mp.find(str) != mp.end())
            ans+=mp[str];
    }
    cout <<ans<<"\n";
 }
 return 0;
}
