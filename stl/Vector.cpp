/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(10);
    cout<<v[3];
    cout<<"size = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}*/

//Using user define input

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      v.push_back(a);
  }
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i]<<" ";
  }
 return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5};
   //v.clear();//it clears all element of vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    //v={2,3};
    //cout<<v.empty();//it is a boolean function which determine it is true or false

 return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5};
    v.resize(10);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  //vector<int>v(10);
  vector<int>v;
  v.resize(10);
  int n;
  cin>>n;
  for(int i=0;i<n;i++) cin>>v[i];
  for(int i=0;i<n;i++) cout<<v[i]<<" ";
 return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(10,5);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5};
    vector<int>tmp;
    tmp=v;//copy the vector v
    cout<<"Size of tmp vector ="<<tmp.size()<<endl;
    for(int i=0;i<tmp.size();i++) cout<<tmp[i]<<" ";
    cout<<endl;
    cout<<"Size of V vector = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5};
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5};
    //for(int u:v) cout<<u<<" ";
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
//    while(cin>>n)
//    {
//        if(n==0) break;
//        v.push_back(n);
//    }
//    cout<<v.size()<<endl;
//    for(auto u:v) cout<<u<<" ";
//    cout<<endl;

    while(1)
    {
        cin>>n;
        if(n==0) break;
        v.push_back(n);
    }
    cout<<v.size()<<endl;
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

 return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int>v={5,3,3,4,1,1,2};
    //sort(v.begin(),v.end());
    //sort(v.begin(),v.begin()+3);
    //sort(v.begin()+1,v.begin()+5);//O(nlog2(n))
    //sort(v.begin(),v.end(),greater<int>());
    //sort(v.rbegin(),v.rend());
    vector<int>v={5,3,1,4};
    reverse(v.begin(),v.end());
    for(auto u:v) cout<<u<<" ";
    cout<<endl;


//    int a[]={2,3,1,4};
//    sort(a,a+4,greater<int>());
//    for(int i=0;i<4;i++) cout<<a[i]<<' ';

 return 0;
}*/



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//  vector<int>v={2,3,4,5};
//  cout<<v.back()<<endl;
////  v.pop_back();//O(1)
////  cout<<v.back()<<endl;
////  cout<<*v.begin()<<endl;
//  //v.erase(v.begin());
//  //v.erase(v.begin()+2);//O(n)
//  reverse(v.begin(),v.end());
//  for(auto u:v) cout<<u<<" ";
//  cout<<endl;
//  while(!v.empty())
//  {
//      cout<<v.back()<<endl;
//      v.pop_back();
//  }
//  cout<<endl;
// return 0;
//}





/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>v={2,3,5,5,7,7,1};
 sort(v.begin(),v.end());
 int sz=unique(v.begin(),v.end())-v.begin();
 cout<<sz<<endl;
for(int i=0;i<sz;i++) cout<<v[i]<<" ";
cout<<endl;
 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>v={2,3,5,5,7,7,1};
 //sort(v.begin(),v.end());
 //for(auto u:v) cout<<u<<" ";
 cout<<endl;
 //vector<int>::iterator it=max_element(v.begin(),v.end());
 vector<int>::iterator it=max_element(v.begin()+1,v.begin()+4);
 cout<<*it<<endl;
 //int n=max_element(v.begin()+1,v.begin()+3)-v.begin();
 int n=max_element(v.begin(),v.end())-v.begin();
 cout<<n<<endl;
 return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5,5,7,7,1};
    //sort(v.begin(),v.end());
    vector<int>::iterator  it=min_element(v.begin(),v.end());
    cout<<*it;
    cout<<endl;

 return 0;
}*/




//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    vector<vector<int>>v;
//    vector<int>a1={2,3,4};
//    vector<int>a2={2,3,4,5,6};
//    v.push_back(a1);
//    v.push_back(a2);
//    for(auto u:v)
//    {
//        for(auto g:u) cout<<g<<" ";
//        cout<<endl;
//    }
//
// return 0;
//}
