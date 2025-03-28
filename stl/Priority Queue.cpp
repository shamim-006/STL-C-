/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
int main()
{
  optimize();
  priority_queue<int>q;
  q.push(1);
  q.push(2);
  //q.push(2);
  q.push(3);
  q.push(4);
//    cout<<q.top()<<endl;
//    q.pop();
//    cout<<q.top()<<endl;
  while(!q.empty())
  {
      cout<<q.top()<<endl;
      q.pop();
  }
  cout<<q.size()<<endl;
  return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
int main()
{
    optimize();
   priority_queue<int, vector<int>, greater<int>>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   while(!q.empty())
   {
       cout<<q.top()<<endl;
       q.pop();
   }
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
int main()
{
    optimize();
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
   q.push({1,2});
   q.push({2,4});
   q.push({2,3});
   q.push({4,4});
   q.push({3,4});
   while(!q.empty())
   {
       cout<<q.top().first<<" "<<q.top().second<<endl;
       q.pop();
   }
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
int main()
{
    optimize();
    priority_queue<pair<int,int>>q;
    q.push({1,-2});
    q.push({2,-3});
    q.push({2,-4});
    q.push({4,-4});
    q.push({3,-4});
    while(!q.empty())
    {
        cout<<q.top().first<<" "<<q.top().second *-1<<endl;
        q.pop();
    }
}*/












/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
int main()
{
    optimize();
    priority_queue<int>q;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)
    {
        q.push(v[i]);
        if(q.size()>=3)
        {
            int a1=q.top();
            q.pop();
            int a2=q.top();
            q.pop();
            int a3=q.top();
            q.pop();
            cout<<1LL*a1*a2*a3<<endl;
            q.push(a1);
            q.push(a2);
            q.push(a3);
        }
        else cout<<-1<<endl;
    }
    return 0;
}*/





/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
int main()
{
    optimize();
    int m,n;
    cin>>m>>n;
    priority_queue<lli>q;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    lli ans=0;
    for(int i=0;i<n;i++)
    {
        if(!q.empty())
        {
            int a=q.top();
            q.pop();
            ans+=a;
            a--;
            if(a>0)q.push(a);
        }
    }
    cout<<ans<<endl;
    return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<lli>q;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            q.push(-x);
        }
        lli ans=0;
        while(q.size()>1)
        {
                lli a=(-q.top());
                q.pop();
                lli b=(-q.top());
                q.pop();
                q.push(-(a+b));
                ans+=(a+b);


        }
        cout<<ans<<endl;
    }
    return 0;
}*/



#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
const int mx=2e5+123;
int a[mx];
int b[mx];
int p[mx];
int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>p[i];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    priority_queue<int,vector<int>,greater<int>>q[5][5];
    for(int i=1;i<=n;i++)q[a[i]][b[i]].push(p[i]);
    int m;
    cin>>m;
    while(m--)
    {
        int c;
        cin>>c;
        int ans=INT_MAX;
        int f,b;
        for(int i=1;i<=3;i++)
        {
            if(!q[c][i].empty() and q[c][i].top()<ans)
            {
                ans=q[c][i].top();
                f=c,b=i;
            }
        }


        for(int i=1;i<=3;i++)
        {
            if(!q[i][c].empty() and q[i][c].top()<ans)
            {
                ans=q[i][c].top();
                f=i,b=c;
            }
        }
        if(ans==INT_MAX)ans=-1;
        else
        {
            q[f][b].pop();
        }
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}



