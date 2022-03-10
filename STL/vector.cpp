#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>v2;
    v2.push_back(7);
    v2.push_back(8);
  //  vector<int>:: iterator it;
    // v.push_back(3);
    // v.push_back(10);
    // v.push_back(7);
    v.assign(5,2);
    v.push_back(10);
     v.push_back(9);

     v.insert(v.begin(),-3);

     v.insert(v.begin()+3,3);

    v.erase(v.begin());
    v.erase(v.begin()+6);
    // auto a= v.begin();
    // cout<<"first element"<<a[0]<<endl;
    // // v.pop_back();

    // it=v.begin();
    // cout<<"iterator points: "<<it[0]<<endl;

    //  it=v.end();
    // cout<<it<<endl;
    
    // int size=(int)v.size();
   
    // for(int i=0;i<size;i++)
    // {
    //     cout<<v[i]<<endl;
    // }

    cout<<v.size()<<endl;
   // sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
cout<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    v.swap(v2);
    v.clear();
  //  v2.clear();
 for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
cout<<endl;
     for(auto it=v2.begin();it!=v2.end();it++)
    {
        cout<<*it<<" ";
    }
}


//output:-
// 7
// 2 2 3 2 2 2 9 

// 2 2 3 2 2 2 9 
