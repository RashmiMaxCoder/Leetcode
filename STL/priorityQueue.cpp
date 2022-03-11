#include <iostream>
#include <queue>
using namespace std;

void PriorityQueue(priority_queue<int> pq){
    priority_queue<int> q = pq;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    priority_queue<int> q;
    q.push(10);
    q.push(-3);
    q.push(7);
    q.push(8);
    
    PriorityQueue(q);
    cout<<q.size()<<endl;
    
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    PriorityQueue(q);

}

// output:
// 10 8 7 -3 
// 4
// 0
// 7 -3
