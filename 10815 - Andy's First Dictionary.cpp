#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    set < string> st;
    while(1)
    {
        string str1;
        char str[201];
        if(scanf(" %s ",str)==EOF)
            break;

        for(int i=0;str[i]!='\0';i++)
        {
            str[i]=tolower(str[i]);
            if(isalpha(str[i]))
                str1+=str[i];
            else
                st.insert(str1),str1="";
        }

        st.insert(str1);
    }
    for(auto it=st.begin();it!=st.end();it++)
       if(*it != "") cout << *(it)<<"\n";
    return 0;
}
