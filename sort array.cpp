#include<bits/stdc++.h >
using namespace std;

void insert_el(vector<int>& a,int el)
{
    if(a.size()==0||a[a.size()-1]<=el)
    {
        a.push_back(el);
        return ;
    }
    int temp=a[a.size()-1];
    a.pop_back();
    insert_el(a,el);
    a.push_back(temp);
}

void sort_a(vector<int>& a)
{
    int el;
    if(a.size()==1)
        return;
    el=a[a.size()-1];
    a.pop_back();
    sort_a(a);
    insert_el(a,el);

}


int main()
{
  vector<int> a;
  a.push_back(4);
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  a.push_back(1);
  sort_a(a);
  for(int i=0;i<a.size();i++)
    cout<<a[i];

}


