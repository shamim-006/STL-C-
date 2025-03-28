/*#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int b[100000];
int main()
{
    optimize();
    int n;
     cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=0; i<100000; i++)
    {
        if(b[i]>=1)
        {
            cout<<"the frequency of "<<i<<" is "<<b[i]<<endl;
        }
    }
    return 0;
}*/






/*#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    map<string,int>id;
    id["shahriar"]=1;
    id["momo"]=3;
    id["sharif"]=4;
    id["prety"]=9;
    cout<<id["sharif"]<<endl;
    return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    map<string,string>gender;
    gender["shahriar"]="male";
    gender["momo"]="female";
    cout<<gender["shahriar"]<<" "<<gender["momo"]<<endl;
    return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<long long>v={1,10120202029929,2828393399390,10120202029929};
    map<long long,int>cnt;
    for(int i=0;i<v.size();i++)
    {
        cnt[v[i]]++;
    }
    cout<<cnt[10120202029929]<<endl;
    return 0;
}*/




#include<bits/stdc++.h>
using namespace std;
int main()
{

 return 0;
}



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<long long>v={1,10120202029929,2828393399390,10120202029929,1,0};
    map<long long,int>cnt;
    for(auto u:v)
    {
        cnt[u]++;
    }
    for(auto u:cnt)
    {
        cout<<u.first<<" "<<u.second<<endl;
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
    map<string,int>id;
    id["shahriar"]=1;
    id["momo"]=3;
    id["sharif"]=5;
    id["sharif"]=7;
    id["prety"]=6;
    id["dima"]=9;
    for(auto u:id)
    {
        cout<<u.first<<" "<<u.second<<endl;
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
    map<int,bool>vis;
    vector<int>v={2,1,2,1,3};
    for(auto u:v) vis[u]=1;
    for(auto u:vis)cout<<u.first<<" "<<u.second<<endl;
    return 0;
}*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>id;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int d;
        cin>>d>>s;
        id[s]=d;

    }

 return 0;
}
