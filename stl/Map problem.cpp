/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>cnt;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            cnt[s]++;
        }
        int ans=0;
        for(auto u:cnt)
        {
            //if(u.second==2)ans++;
            if(u.second==2)cout<<u.first<<" ";
        }
        //cout<<ans;
    }
}*/






/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      string s;
      char c;
      cin>>c;
      getline(cin,s);
      s+=c;
      string tmp;
      vector<string>v;
      for(auto u:s)
      {
          if(isspace(u))
          {
              v.push_back(tmp);
              tmp.clear();
          }
          else tmp+=u;

      }
      int mxfrq=0;
      map<string,int>cnt;
      for(auto u:v)
      {
          cnt[u]++;
          mxfrq=max(mxfrq,cnt[u]);
      }
      string ans;
      for(auto u:v)
      {
          if(cnt[u]==mxfrq)
          {
              ans=u;
              break;
          }
      }
      cout<<ans<<" "<<mxfrq<<endl;
  }

 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>cnt;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        cnt[a]++;
    }
    int ans=0;
    for(auto u:cnt)
    {
        if(u.second>=u.first) ans+=(u.second-u.first);
        else
        {
            ans+=u.second;
        }
    }
    cout<<ans<<endl;

 return 0;
}*/






/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    map<string,int>cnt;
    while(n--)
    {
        string s;
        cin>>s;
        if(cnt[s]==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        cnt[s]=1;
    }

    return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    map<string,int>cnt;
    while(n--)
    {
        string s;
        cin>>s;
        if(cnt[s]==0)cout<<"OK"<<endl;
        else
        {
            cout<<s<<cnt[s]<<endl;
        }
        cnt[s]++;
    }
    return 0;
}*/






/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    map<string,string>ipName;
    for(int i=0;i<n;i++)
    {
        string Name,ip;
        cin>>Name>>ip;
        ipName[ip]=Name;
    }
    while(m--)
    {
        string name,ip;
        cin>>name>>ip;
        ip.pop_back();
        cout<<name<<" "<<ip<<"; #"<<ipName[ip]<<endl;
    }
    return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       int n,m;
       cin>>n>>m;
       map<pair<int,int>,bool>p;
       bool f=1;
       while(m--)
       {
           int a,b;
           cin>>a>>b;
           if(p[{a,b}])f=0;
           p[{a,b}]=1;
       }
       if(f)cout<<"Scenario #"<<i<<": possible"<<endl;
       else cout<<"Scenario #"<<i<<": impossible"<<endl;
    }

 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    map<int,int>p;
    vector<int>v(n);
    int frq=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        p[v[i]]++;
        frq=max(frq,p[v[i]]);
    }
    cout<<frq<<endl;


    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,c=0;
    map<int,int>cnt;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(auto u:v)
    {
        cnt[u]++;
    }
    for(auto u:cnt)
    {

        if(u.first<=u.second)
        {
            c+=u.second-u.first;
        }

        else c+=u.second;
    }
    cout<<c<<endl;

}




