#include<bits/stdc++.h>
using namespace std;

void show(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int> q;

q.push(10);
q.push(11);
q.push(-3);
q.push(2);
show(q);

cout<<q.size()<<endl;
cout<<q.front()<<endl;
cout<<q.back()<<endl;

q.pop();
show(q);
}

// output:
// 10 11 -3 2 
// 4
// 10
// 2
// 11 -3 2
