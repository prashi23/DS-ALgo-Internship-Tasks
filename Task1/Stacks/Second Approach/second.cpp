#include<bits/stdc++.h> 
using namespace std;
class Stack 
{ 
    queue<int> q1, q2;
    public:
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int res;
        while(!q1.empty())
        {
            if(q1.size() == 1)
                res = q1.front();
            else
                q2.push(q1.front());
            q1.pop();
        }
        q2.swap(q1);
        return res;
    }
    
    int top() {
        
        int res;
        while(!q1.empty())
        {
            if(q1.size() == 1)
                res = q1.front();
            
            q2.push(q1.front());
            q1.pop();
        }  
        
        q2.swap(q1);
        return res;
    }

    bool empty() {
        return (q1.empty());
    }
};
