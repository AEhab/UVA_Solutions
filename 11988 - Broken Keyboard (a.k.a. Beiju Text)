/////// Two solutions
/////// first one using stack and Queue
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
       stack <string> en;
       queue <string> st;
       string temp;
       for(int i=(int)str.size()-1;i>=0;i--)
       {
           if(str[i]=='[')
           {
               st.push(temp);
               temp="";
           }
           else if(str[i]==']')
           {
              en.push(temp);
              temp="";
           }
           else
           temp=str[i]+temp;
       }
       while(!st.empty())
       {
           cout<<st.front();
           st.pop();
       }
       cout << temp;
       while(!en.empty())
       {
           cout<<en.top();
           en.pop();
       }
       cout <<endl;
    }

    return 0;
}
/////// Second Method
/////// Using linked list
#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    char a;
    node *nxt,*pre;
    node(char c)
    {
        this->a = c;
        this->nxt=nullptr;
        this->pre=nullptr;
    }
    node()
    {
        this->a = '0';
        this->nxt=nullptr;
        this->pre=nullptr;
    }
};

void insert_me(node** pos,char val)
{
    node* n = new node(val);
    if( (*pos) == nullptr)
        (*pos) = n;
    else
    {
        n->pre = (*pos);
        (*pos)->nxt = n;
        (*pos) = n;
    }
}

int main()
{
    string str;
    while(getline(cin,str))
    {
        node *head = nullptr,*it=nullptr;
        for(int i=0; i<(int)str.size(); i++)
        {
            if(str[i]=='[')
            {
                while(str[i]=='['&&i<str.size())
                    i++;
                if(str[i]==']')

                if(i==str.size())
                    break;
                int j=0;
                node *n= nullptr,*en= nullptr;
                while(str[i]!=']'&&str[i]!='['&&i<str.size())
                {
                    insert_me(&en,str[i]);
                    if(j==0)
                        n=en;
                    i++,j++;
                }
                if(i<str.size())
                i--;
                if(head==nullptr)
                {
                    it=en;
                    head=n;
                }
                else if(en !=nullptr)
                {
                    en->nxt=head;
                    head->pre = en;
                    head = n;
                }
            }
            else
            {
                if(str[i]!=']')
                {
                    insert_me(&it,str[i]);
                    if(head==nullptr)
                        head=it;
                }
            }
        }
        node *it2 = head;
        while(it2!=nullptr)
        {
            cout <<it2->a;
            it2=it2->nxt;
        }
        cout <<"\n";
    }

    return 0;
}
