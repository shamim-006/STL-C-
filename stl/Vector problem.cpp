/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int s=0,d=0,t=1;
    while(!v.empty())
    {
       if(t==1)
       {
           if(v[0]>v.back())
           {
               s+=v[0];
               v.erase(v.begin());
           }
           else
           {
               s+=v.back();
               v.pop_back();
           }
           t=2;
       }
       else
       {
           if(v[0]>v.back())
           {
               d+=v[0];
               v.erase(v.begin());
           }
           else
           {
               d+=v.back();
               v.pop_back();
           }
           t=1;
       }
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int m=unique(v.begin(),v.end())-v.begin();
        if(m==x)cout<<"Good"<<endl;
        else if(m<x)cout<<"Bad"<<endl;
        else cout<<"Average"<<endl;
    }
    return 0;
}
