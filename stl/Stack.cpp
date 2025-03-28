/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();            //Stack is a LIFO
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //cout<<st.top()<<endl;
    //st.pop();
    //cout<<st.top();
    cout<<"Size = "<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}*/



///Balanced Brackets


#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool isbalanced(char c1,char c2)
{
    return ((c1=='(' and c2==')') or (c1=='{' and c2=='}') or (c1=='[' and c2==']') );
}
int main()
{
    optimize();
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char>st;
        bool done=1;
        for(auto u:s)
        {
            if(u=='(' or u=='{' or u=='[')st.push(u);
            else
            {
                if(st.empty())
                {
                    done=0;
                    break;
                }
                else
                {
                    if(isbalanced(st.top(),u))
                    {
                        st.pop();
                    }
                    else
                    {
                        done=0;
                        break;
                    }
                }
            }
        }
        //if(!st.empty())done=0;
        if(done)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
