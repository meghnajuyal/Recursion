#include<bits/stdc++.h>
using namespace std;

int pos(vector<int>&v,int k,int i)
{
    if(v.size()==1)
     return v[0];


    i=(i+k)%v.size();

    v.erase(v.begin()+i);

    pos(v,k,i);

}
int main()
{
   int n,k;
   cin>>n>>k;
   vector<int>v;
   for(int i=1;i<=n;i++)
     v.push_back(i);


   k=k-1;
   cout<<pos(v,k,0);


}
