#include <iostream>
#include <deque>
using namespace std;

void showDeque(deque<int> q){
    deque<int> :: iterator it;
    for(it = q.begin(); it!=q.end() ;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    deque<int> dq;
    dq.push_back(10);     //   7  10     -3  8
    dq.push_front(-3);
    dq.push_back(7);
    dq.push_front(8);
    
    showDeque(dq);
    cout<<"size of deque : "<<dq.size()<<endl;
    cout<<"max size : "<<dq.max_size()<<endl;
    
    cout<<dq.at(2)<<endl;
   
    cout<<dq.front()<<endl;
   
    cout<<dq.back()<<endl;
    
    //dq.pop_back();
    //showDeque(dq);
    
    dq.pop_front();
    showDeque(dq);
}


// output:
// 8 -3 10 7 
// size of deque : 4
// max size : 1073741823
// 10
// 8
// 7
// -3 10 7
