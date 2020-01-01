include<bits/stdc++.h> 
using namespace std;
class Stack 
{ 
int n;

queue<int>q1;
public:
void push(int x) {
    q1.push(x);
    n++;
    for (int i = 0; i < q1.size()-1; i++)
    {
        q1.push(q1.front());
        q1.pop();
    }
    
}

int pop() {
    n--;
    int a = q1.front();
    q1.pop();
    return a;
    
}
int top() {
    return q1.front();
    
}
bool empty() {
    return (n==0);
    
}};
