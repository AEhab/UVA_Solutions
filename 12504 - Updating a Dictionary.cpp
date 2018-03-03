#include <bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    int t;
    cin >> t;
    scanf(" ");
    while (t--)
    {
        string dir1,dir2,key,val;
        map <string,string> d1,d2;
        getline(cin,dir1);
        getline(cin,dir2);
        bool f=1;
        for(int i=1; i<(int)dir1.size(); i++)
        {
            if(dir1[i]==','||dir1[i]=='}')
            {
                d1[key]=val;
                f=1;
                val=key="";
            }
            else if(dir1[i]==':')
                f=0;
            else if(f)
                key+=dir1[i];
            else
                val+=dir1[i];
        }
        for(int i=1; i<(int)dir2.size(); i++)
        {
            if(dir2[i]==','||dir2[i]=='}')
            {
                d2[key]=val;
                f=1;
                val=key="";
            }
            else if(dir2[i]==':')
                f=0;
            else if(f)
                key+=dir2[i];
            else
                val+=dir2[i];
        }
        string ne="+",les="-",ch="*";
        auto it1=d1.begin();
        auto it2=d2.begin();
        while(it1!=d1.end()&&it2!=d2.end())
        {
            if(it1->first == it2->first)
            {
                if(it1->second != it2->second)
                {
                    if(ch=="*")
                        ch+=it1->first;
                    else
                        ch=ch+","+it1->first;
                }

                it1++;
                it2++;
            }
            else if(it1->first < it2->first)
            {
                if(les == "-")
                    les+=it1->first;
                else
                    les+=(","+it1->first);
                it1++;
            }
            else if(it1->first > it2->first)
            {
                if(ne=="+")
                    ne+=it2->first;
                else
                    ne+=(","+it2->first);
                it2++;
            }
        }
        while(it1!=d1.end())
        {
            if(les == "-")
                les+=it1->first;
            else
                les+=(","+it1->first);
            it1++;
        }
        while(it2!=d2.end())
        {
            if(ne=="+")
                ne+=it2->first;
            else
                ne+=(","+it2->first);
            it2++;
        }
        if(ne.size()>1||ch.size()>1||les.size()>1)
        {
            if(ne.size()>1) cout << ne <<"\n";
            if(les.size()>1) cout << les <<"\n";
            if(ch.size()>1) cout << ch <<"\n";
        }
        else
            cout <<"No changes\n";
        cout << "\n";
    }
    return 0;
}
