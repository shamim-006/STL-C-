#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
const int mx=1e7+123;
int cnt[mx];
int main()
{
    optimize();

    for(int i=1; i<=mx; i++)
    {
        for(int j=i; j<=mx; j+=i)
        {
            cnt[j]++;
        }
    }
    int n;
    cin>>n;
    ll sum=0;
    for(int i=1; i<=n; i++)sum+=(1LL*i*cnt[i]);
    cout<<sum<<endl;
}



