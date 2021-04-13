#include<bits/stdc++>
using namespace std;


void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here

        if(sizeOfStack==0)
          return;

        solve(s,sizeOfStack/2+1);
    }

    void solve(stack<int>&s,int k)
    {
        if(k==1)
        {
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        solve(s,k-1);
        s.push(temp);
    }
