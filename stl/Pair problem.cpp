/*include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    vector<pair<string,string>>s(n);
    for(int i=0;i<n;i++)cin>>s[i].first>>s[i].second;
    sort(s.begin(),s.end());
    int m=unique(s.begin(),s.end())-s.begin();
    cout<<m<<endl;
    return 0;
}*/




#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first)return 1;
    else if (p1.first==p2.first)return(p1.second<p2.second);
    else return 0;
}
int main()
{
    optimize();
    int n,c=0,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end(),cmp);
    for(auto u:v)
    {
        if(u==v[k-1]) c++;
    }
    cout<<c<<endl;
 return 0;
}
