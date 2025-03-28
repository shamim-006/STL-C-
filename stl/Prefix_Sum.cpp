//#include<bits/stdc++.h>
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//#define ll long long
//#define endl '\n'
//const int mx=2e5+123;
//ll a[mx],sum[mx];
//using namespace std;
//int main()
//{
//    optimize();
//    int n,q;
//    cin>>n>>q;
//    for(int i=1;i<=n;i++)cin>>a[i];
//    for(int i=1;i<=n;i++)
//    {
//        sum[i]=a[i]+sum[i-1];
//    }
//    while(q--)
//    {
//        int l,r;
//        cin>>l>>r;
//        cout<<sum[r]-sum[l-1]<<endl;
//    }
//
//}



//#include<bits/stdc++.h>
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//#define ll long long
//#define endl '\n'
//const int mx=2e5+123;
//ll a[mx],sum[mx];
//using namespace std;
//int main()
//{
//    optimize();
//    int n;
//    cin>>n;
//    vector<int>v(n);
//    for(int i=0;i<n;i++)cin>>v[i];
//    int m=v.size();
//    vector<int>sum(m+1);
//    for(int i=1;i<=m;i++)
//    {
//        sum[i]=sum[i-1]+v[i-1];
//    }
//    int ans=0;
//    for(int l=1;l<=m;l+=2)
//    {
//        for(int i=l;i<=m;i++)
//        {
//            ans+=sum[i]-sum[i-l];
//        }
//    }
//    cout<<ans<<endl;
//
//}







#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define endl '\n'
const int mx=2e5+123;
ll a[mx],sum[mx];
using namespace std;
int main()
{
    optimize();
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        sum[i]=a[i]^sum[i-1];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<(sum[r]^sum[l-1])<<endl;
    }

}


