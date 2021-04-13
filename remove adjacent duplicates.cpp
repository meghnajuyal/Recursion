#include<bits/stdc++.h>
using namespace std;

void removeAd(string &s,int &flag)
{
    if(s.size()==1)
      return;

    char temp=s[s.size()-2];
    char el=s[s.size()-1];
    s.pop_back();
    removeAd(s);
    //cout<<s[pos-1]<<" "<<el<<endl;
    if(el==s[s.size()-1])
    {
        flag=0;
        s.pop_back();

    }

    else if(el!=temp)
        s.push_back(el);




}

int main()
{
   string s="mississipie";
   removeAd(s);
   cout<<s;

}
