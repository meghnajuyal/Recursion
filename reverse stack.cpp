#include<bits/stdc++.h>
using namespace std;

void insert_el(stack<int>&s,int el)
{
    if(s.size()==0)
    {
        s.push(el);
        return;
    }
    int temp=s.top();
    s.pop();
    insert_el(s,el);
    s.push(temp);

}
void reverse_stack(stack<int>&s)
{
    if(s.size()==1)
        return ;

    int el=s.top();
    s.pop();
    reverse_stack(s);
    insert_el(s,el);

}


