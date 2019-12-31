#include <bits/stdc++.h> 
using namespace std;
class Stack 
{  
    queue<int> q1, q2;
    public: 
    void push(int x) 
    { 
        q2.push(x); 
        while (!q1.empty()) 
        { 
            q2.push(q1.front()); 
            q1.pop(); 
        }
        queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
    } 
    void pop()
    { 
        if (q1.empty())  
			      return ; 
        q1.pop(); 
    } 
    int top() 
    { 
        if (q1.empty())  
			      return -1; 
        return q1.front(); 
    } 
 }; 
int main() 
{ 
    Stack s; 
    s.push(1); 
    s.push(10); 
    s.push(5);
    s.push(3); 
    s.push(7);
    cout<<s.top()<<"\n"; 
    s.pop(); 
    cout <<s.top()<<"\n"; 
    s.pop(); 
    cout <<s.top()<<"\n"; 
    return 0; 
} 

