#include<bits/stdc++.h>
using namespace std;

int main()
{
   map<int,int> mp;
   mp.insert(pair<int,int>(1,35));
   mp.insert({2,40});
   mp.insert({3,50});
   mp.insert({5,10});
    //print
   for(auto it=mp.begin(); it!=mp.end();it++)
   {
         cout<<it->first<<" "<<it->second<<endl;

   }
   //.begin()---> return iterator to the first element
//    auto var=mp.begin();
//    cout<<"By var iterator"<<var->first<<" "<<var->second<<endl;

   //.end()--> return iterator to the last element
//      auto var=mp.end();// not actual map end
//    cout<<"By var iterator"<<var->first<<" "<<var->second<<endl;

//cout<<mp.size()<<endl;
//cout<<mp.max_size()<<endl;


//.erase()
auto it=mp.find(3);
mp.erase(it);
mp.erase(5);
for(auto it=mp.begin(); it!=mp.end();it++)
   {
    cout<<it->first<<" "<<it->second<<endl;

   }
  

  mp.clear();
  cout<<"map is clear or not ?"<<mp.empty()<<endl;

    //.empty()
    // if(mp.empty())
    // {
    //     cout<<"map is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"map is not empty"<<endl;
    // }
   
   
 //.clear()
 //     mp.clear();
 //     for(auto it=mp.begin(); it!=mp.end();it++)
 //    {
 //     cout<<it->first<<" "<<it->second<<endl;

 //    }
return 0;

}
