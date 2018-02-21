#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.in","r",stdin);
    //  freopen("out.out","w",stdout);
    int n;
    cin >> n;
    while(n--)
    {
        string str,ans="";
        stack <char> op;
        string out="";
        unordered_map <char,int> mp;
        mp['+']=2;
        mp['-']=3;
        mp['*']=4;
        mp['/']=5;
        mp['^']=6;
        mp['(']=7;
        cin >> str;
        for(int i=0; i<(int)str.size(); i++)
        {
            if(mp.find(str[i])!=mp.end())
            {
                if(!op.empty() &&mp[str[i]]<=mp[op.top()]&&op.top()!='('&&str[i]!='(')
                {
                    while(!op.empty()&&mp[str[i]]<=mp[op.top()])
                    {
                        out+=op.top();
                        op.pop();
                    }
                    op.push(str[i]);
                }
                else
                    op.push(str[i]);
            }
            else if (str[i]==')')
            {
                while(!op.empty()&&op.top()!='(')
                {
                    out+=op.top();
                    op.pop();
                }
                if(!op.empty()&&op.top()=='(')
                    op.pop();
            }
            else
                out+=str[i];

        }

        while(!op.empty())
        {
            if(op.top()!='(')
            out+=op.top();
            op.pop();
        }
        cout<<out<<endl;
    }
    return 0;
}
