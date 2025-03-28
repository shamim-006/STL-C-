/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s+='a';
    s+='b';
    s=s+'c';
    cout<<s<<endl;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Shahriar";
    cout<<s.size()<<endl;
    cout<<s<<endl;
 return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Shahriar";
    s[0]='Y';
    cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<s[3]<<endl;

 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 string s1="Shahriar",s2="Alam";
 char c=' ';
 s=s1+c+s2;
 cout<<s<<endl;
 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 string s1="Shahriar",s2="Alam";
 char c=' ';
 s1+=' ';
 s1+="Alam ";
 s1+="Shihab";
 cout<<s1<<endl;
 return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 string s1="Shahriar",s2="Alam";
 s1.clear();
 cout<<s1<<endl;
 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1="Shahriar",s2="Alam";
    //s1=s2;
    s1.clear();
    cout<<s1.empty()<<endl;
    cout<<s1<<endl;
 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="Muhammad Shahriar Alam";
 string::iterator it;
 for(it=s.begin();it!=s.end();it++)
   {
       cout<<*it;
   }
 return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="Muhammad Shahriar Alam";
 for(auto u:s)cout<<u;
 cout<<endl;
 return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s1="Muhammad",s2="Shahriar";
 if(s1==s2)cout<<"Equal"<<endl;
 else cout<<"Not equal"<<endl;
 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="Shar";
 reverse(s.begin(),s.end());
 cout<<s;
 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="aabaa";
 string tmp=s;
 reverse(tmp.begin(),tmp.end());
 if(s==tmp)cout<<"Palindrome\n";
 else cout<<"Not Palindrome\n";
 return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s;
    cin>>s;
    cout<<s<<endl;
 return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s;
    getline(cin,s);
    cout<<s<<endl;
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
    for(int tc=1;tc<=n;tc++)
    {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        cout<<"Case-"<<tc<<":"<<s<<endl;
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
  string s="decabA";
  //sort(s.begin(),s.end());
  sort(s.rbegin(),s.rend());
  cout<<s<<endl;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s="decabAAA";
    sort(s.begin(),s.end());
    int sz=unique(s.begin(),s.end())-s.begin();
    for(int i=0;i<sz;i++) cout<<s[i];
    cout<<endl;
}*/





/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
 optimize();
 string s="decabAAA";
 cout<<*max_element(s.begin(),s.end())<<endl;
 cout<<*min_element(s.begin(),s.end())<<endl;
 return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
 optimize();
 string s="decabA";
 //s.erase(s.begin());
 //s.erase(s.end()-1);
 s.erase(s.begin()+4);
 cout<<s;
 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
 optimize();
 string s="eeemon",t="eemomo";
 if(s<t)cout<<s<<" "<<"is smallest"<<endl;
 else cout<<t<<" "<<"is smallest"<<endl;
 return 0;
}*/





//Substring means pura akta continuous part newa like :abcdef->cdef
//GAP AND CONTIUOUS HOLE SUBSEQUENCE:adef
//SUBstring jodi back teke shuru hoy taile eta k bole suffix :fedc
//SUBstring jodi back teke shuru hoy taile eta k bole prefix:abc



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<string>v;
    v.push_back("Shahriar");
    v.push_back("Mubarrat");
    v.push_back("emon");
    v.push_back("Nishan");
    v.push_back("momo");
    v.push_back("Prity");
    //sort(v.begin(),v.end());
    sort(v.rbegin(),v.rend());
    for(auto u:v) cout<<u<<endl;
}*/


/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    string s="asd";
    string f="erty";
    for(int i=1;i<=3;i++) s+=f[i];
    cout<<s<<endl;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s="ASADAF";
    s.erase(remove(s.begin(),s.end(),'A'),s.end());
    cout<<s<<endl;
}*/


/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s="abcd";
    s.pop_back();
    cout<<s.back()<<endl;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<string>v;
    v.push_back("shahriar");
    v.push_back("shahriar");
    v.push_back("momo");
    v.push_back("momo");
    v.push_back("sharif");
    v.push_back("sharif");
    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    cout<<sz<<endl;
    for(int i=0;i<sz;i++) cout<<v[i]<<endl;
}*/

/*


#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s,t;
    cin>>s>>t;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(t.begin(),t.end(),t.begin(),::tolower);
    //transform(s.begin(), s.end(), s.begin(), ::toupper);
    if(s>t)cout<<"1"<<endl;
    else if(s<t)cout<<"-1"<<endl;
    else cout<<"0"<<endl;
    return 0;

}




*/

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=123;
    string s=to_string(a);
    cout<<s<<endl;
    s[0]='2';
    cout<<s<<endl;

 return 0;
}*/





/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="345";
 int a=stoi(s);
 cout<<a<<endl;
 a++;
 cout<<a<<endl;
 return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  char ch='A';
  char d='a';
  char e=' ';
  bool f1=isupper(ch);
  bool f2=islower(d);
  bool f3=isspace(e);
  cout<<f1<<endl;
  cout<<f2<<endl;
  cout<<f3<<endl;
 return 0;
}*/





/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 char d='a';
 d=toupper(d);
 cout<<d<<endl;
 char e='A';
 e=tolower(e);
 cout<<e<<endl;
 return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s="shahritalm";
    s.erase(s.begin()+4,s.begin()+8);
    cout<<s<<endl;
}*/




/*#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
 optimize();
 string s="Shahriar ";
 string t="gada Alam gada";
 copy(t.begin()+5,t.begin()+9,back_inserter(s));
 cout<<s<<endl;
 return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="asdfaaafaaat";
    s.erase(remove(s.begin(),s.end(),'a'),s.end());
    cout<<s<<endl;

 return 0;
}*/





/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Shahriar";
    if(s.find("ria")!=-1) cout<<"Sub-string found"<<endl;
    else cout<<"Not found"<<endl;

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
   string s;
   cin>>s;
   do
   {
       cout<<s<<endl;
   }while(next_permutation(s.begin(),s.end()));
   return 0;
}
