//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

set <string> st;

void cleanme(string str) {
    string neww="";
    int be=0,en=(int)str.size()-1;
    while(!isalpha(str[be])&&str[be]!='-')
        be++;

    while(!isalpha(str[en])&&str[en]!='-')
        en--;

    for(int i = be; i<=en; i++)
        neww+=str[i];

    int i=0;
    str = "";
    for(i=0; i<(int)neww.size(); i++) {
        if(!isalpha(neww[i]) && neww[i]!='-') {

            st.insert(str);
            str="";
        } else
            str+=neww[i];
    }
    st.insert(str);
}


int main() {
  
  string str="",temp;
    st.clear();
    while(cin >> temp) {
        if(temp[(int)temp.size()-1] == '-') {
            for(int i=0; i<(int)temp.size()-1; i++)
                str+=temp[i];
        } else {
            str+=temp;
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            cleanme(str);
            str="";
        }
    }
    set <string> ::iterator it = st.begin();
    for(it++; it!=st.end(); it++)
        cout << *it <<endl;
    return 0;
}
