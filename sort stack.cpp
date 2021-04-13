#include<bits/stdc++.h >
using namespace std;

void insert_el(stack<int>& a,int el)
{
    if(a.size()==0||a.top()<=el)
    {
        a.push(el);
        return ;
    }
    int temp=a.top();
    a.pop();
    insert_el(a,el);
    a.push(temp);
}

void sort_a(stack<int>& a)
{
    int el;
    if(a.size()==1)
        return;
    el=a.top();
    a.pop();
    sort_a(a);
    insert_el(a,el);

}


int main()
{
  stack<int> a;
  a.push(4);
  a.push(1);
  a.push(2);
  a.push(3);
  a.push(1);
  sort_a(a);


}


