/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
//    pair<string,int>p;
//    p.first="Shahriar";
//    p.second=13;
//    cout<<p.first<<" "<<p.second;
   pair<string,vector<int>>p;
   p.first="Shahriar";
   p.second={2,3,4};
   cout<<p.first<<endl;
   for(auto u:p.second)
   {
       cout<<u<<" ";
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
    //pair<int,int>p;
    pair<string,vector<int>>p;
//    p=make_pair(2,3);
//    p.first++;
      //p={2,3};
      p={"Shahriar",{2,3,4}};
    //cout<<p.first<<" "<<p.second<<endl;
    cout<<p.first<<endl;
    for(auto u:p.second)cout<<u<<" ";
    cout<<endl;
    return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    pair<int,int>p1,p2;
//    p1={2,3};
//    p2={3,1};
//  p1={3,5};
//  p2={3,6};
    p1={3,5};
    p2={1,6};
    if(p1<p2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    pair<int,int>p1,p2;
    p1={3,5};
    p2={1,6};
    //pair<int,int>p=min(p1,p2);
    pair<int,int>p=max(p1,p2);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}*/





/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<pair<int,int>>v;
    v.push_back({6,5});
    v.push_back({2,3});
    v.push_back({4,5});
    v.push_back({6,1});
    v.push_back({1,9});
    //sort(v.begin(),v.end());
    sort(v.rbegin(),v.rend());
    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define lli long long int
void solve(int n);
int main()
{
    optimize();
    int n;
    cin>>n;
	vector<pair<int,int>>v(n);
//	v.push_back({6,5});
//	v.push_back({2,3});
//	v.push_back({4,5});
//	v.push_back({6,1});
//	v.push_back({1,9});
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	sort(v.begin(),v.end());
	for(auto u:v)cout<<u.first<<" "<<u.second<<endl;
	return 0;
}*/











/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    pair<int,int>p[]={{6,5},{2,3},{4,5},{6,1},{1,9}};
    sort(p,p+5);
    for(int i=0;i<5;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
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
    vector<pair<string,int>>v;
    v.push_back({"shahriar",21});
    v.push_back({"momo",13});
    v.push_back({"sharif",34});
    v.push_back({"shahriar",35});
    v.push_back({"sharif",34});
    sort(v.begin(),v.end());
    for(auto u:v)cout<<u.first<<" "<<u.second<<endl;
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<pair<string,int>>v;
    v.push_back({"shahriar",21});
    v.push_back({"momo",13});
    v.push_back({"sharif",34});
    v.push_back({"shahriar",35});
    v.push_back({"sharif",34});
    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    for(int i=0;i<sz;i++)cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}*/





#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first)return 1;
    else if(p1.first==p2.first)return(p1.second<p2.second);
    else return 0;
    return 0;
}
int main()
{
    optimize();
    vector<pair<int,int>>v;
    v={{4,143},{3,120},{4,500},{1,20}};
    sort(v.begin(),v.end(),cmp);
    for(auto u:v)cout<<u.first<<" "<<u.second<<endl;
    //cout<<endl;

 return 0;
}

