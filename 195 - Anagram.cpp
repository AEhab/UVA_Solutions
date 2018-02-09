#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    vector <char> cap(26),small(26);
    char j=0;
     map <char,char> mp;
    for(char i=0;i<26;i++)
    {
        cap[i]=j;
        mp[j]='A'+i;
        small[i]=j+(char)1;
        mp[j+(char)1]='a'+i;
        j+=2;
    }
    int t;
    cin >> t;
    while (t--)
    {
        string str,str2;

        cin >>str;
        str2=str;
        for(int i = 0;i<(int)str.size();i++)
        {
            if(str[i]>='a'&&str[i]<='z')
                str[i]=small[str[i]-'a'];
            else
                str[i]=cap[str[i]-'A'];
        }
        sort(str.begin(),str.end());
        do
        {
            for(int i = 0;i<(int)str2.length();i++)
				str2[i]=mp[str[i]];
				
			cout<<str2<<"\n";
			
        }while(next_permutation(str.begin(),str.end())== true);
    }
    return 0 ;
}
