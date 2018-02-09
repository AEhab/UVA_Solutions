#include<bits/stdc++.h>

using namespace std;

pair <int,int> Rightmove (vector <string>& vec,int i,int j,int y,int x,string& dir)
{
    if (j+1 < y && vec[j+1][i]!='-')
    j++,vec[j][i]=='*' ? j=j : vec[j][i]+=1,dir = "Down";
    else if(i+1 < x && vec[j][i+1]!='-')
    i++,vec[j][i]=='*' ? i=i : vec[j][i]+=1,dir = "Right";
    else
    return make_pair(-1,-1);
    return make_pair(j,i);
}
pair <int,int> Upmove (vector <string>& vec,int i,int j,int y,int x,string& dir)
{
    if(i+1 < x && vec[j][i+1]!='-')
    i++,vec[j][i]=='*' ? i=i : vec[j][i]+=1,dir = "Right";
    else if (j-1 > -1 && vec[j-1][i]!='-')
    j--,vec[j][i]=='*' ? i=i : vec[j][i]+=1,dir = "Up";
    else
    return make_pair(-1,-1);
    return make_pair(j,i);
}
pair <int,int> Leftmove (vector <string>& vec,int i,int j,int y,int x,string& dir)
{
    if (j-1 > -1 && vec[j-1][i]!='-')
    j--,vec[j][i]=='*' ? i=i : vec[j][i]+=1,dir = "Up";
    else if(i-1 > -1 && vec[j][i-1]!='-')
    i--,vec[j][i]=='*' ? i=i : vec[j][i]+=1,dir = "Left";
     else
    return make_pair(-1,-1);
    return make_pair(j,i);
}
pair <int,int> Downmove (vector <string>& vec,int i,int j,int y,int x,string& dir)
{
    if(i-1 > -1 && vec[j][i-1]!='-')
    i--,vec[j][i]=='*' ? i=i : vec[j][i]+=1,dir = "Left";
    else if (j+1 < y && vec[j+1][i]!='-')
    j++,vec[j][i]=='*' ? i=i : vec[j][i]+=1,dir = "Down";
     else
    return make_pair(-1,-1);
    return make_pair(j,i);
}

int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    while (1)
    {
        int x,y,i,j,fi=1,s=0,t=0,fo=0,e=0;
        char a;
        cin >> y >> x;
        if(x+y==0)
            break;
        vector < string > arr(y);
        for(j=0;j<y;j++)
        {
            for(i=0;i<x;i++)
            {
                 cin >> a;
                 if(a == '1')
                    arr[j]+='-';
                 else
                    arr[j]+='0';
            }
        }
        arr[y-1][0]='*';
        pair <int,int> pos;
        pos.first = y-1;
        pos.second = 0;
        j=y-1;
        i=0;
        int foo = 20;
        string dir ="Right";
        do
        {
            if(dir == "Right")
            {
                 pos = Rightmove(arr,i,j,y,x,dir);
                if(pos!= make_pair(-1,-1))
                {
                    j=pos.first;
                    i=pos.second;
                }
                else
                dir = "Up";
            }
            if ( dir == "Up")
            {
                pos = Upmove(arr,i,j,y,x,dir);
                if(pos!= make_pair(-1,-1))
                {
                    j=pos.first;
                    i=pos.second;
                }
                else
                dir = "Left";
            }
            if ( dir == "Left")
            {
                pos = Leftmove(arr,i,j,y,x,dir);
                if(pos!= make_pair(-1,-1))
                {
                    j=pos.first;
                    i=pos.second;
                }
                else
                dir = "Down";
            }
            if(dir == "Down")
            {
                pos = Downmove(arr,i,j,y,x,dir);
                if(pos!= make_pair(-1,-1))
                {
                    j=pos.first;
                    i=pos.second;
                }
                else
                dir = "Right";
            }
            }while(arr[j][i]!='*');
        for(i=0;i<y;i++)
            for(j=0;j<x;j++)
            {
                if(arr[i][j]=='0')
                e++;
                else if(arr[i][j]=='1')
                fi++;
                else if (arr[i][j]=='2')
                    s++;
                else if (arr[i][j]=='3')
                    t++;
                else if (arr[i][j]=='4')
                    fo++;
            }
        if(e<10)
        cout << "  ";
        else if (e<100)
            cout << " ";
        cout<<e;
        if(fi<10)
        cout << "  ";
        else if (fi<100)
            cout << " ";
        cout<<fi;
        if(s<10)
        cout << "  ";
        else if (s<100)
            cout << " ";
        cout<<s;
        if(t<10)
        cout << "  ";
        else if (t<100)
            cout << " ";
        cout<<t;
        if(fo<10)
        cout << "  ";
        else if (fo<100)
            cout << " ";
        cout<<fo<< "\n";
    }
    return 0 ;
}
