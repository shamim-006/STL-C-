/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool isvowel(char c)
{
    return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
}
int main()
{
    string s,t;
    cin>>s;
    for(auto u:s)
    {
        char c=tolower(u);
        if(!isvowel(c))
        {
            t+='.';
            t+=c;
        }
    }
    cout<<t<<endl;
 return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool isvowel(char c)
{
    return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main()
{
    optimize();
    string s,t,r;
    getline(cin,s);
    getline(cin,t);
    getline(cin,r);
    int d=0,c=0,p=0;
    for(auto u:s)
    {
        if(isvowel(u)==1)
        {
            d++;
        }
    }
    for(auto v:t)
    {
        if(isvowel(v)==1)
        {
            c++;
        }
    }
    for(auto w:r)
    {
        if(isvowel(w)==1)
        {
            p++;
        }
    }
    if(d==5&&c==7&&p==5)cout<<"YES"<<endl;
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
    int t;
    cin>>t;
    while(t--)
    {
      string s,k;
      cin>>s;
      k=s;
      reverse(k.begin(),k.end());
      if(k==s)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
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
   int t;
   cin>>t;
   while(t--)
   {
      string s;
      cin>>s;
      if(next_permutation(s.begin(),s.end()))cout<<s<<endl;
      else cout<<"no answer"<<endl;
   }
   return 0;
}*/



#include<bits/stdc++.h>
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
      int n,k;
      cin>>n>>k;

   }
}


