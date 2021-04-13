#include<bits/stdc++.h>
using namespace std;


void swap(char *x,char *y)
{
    char temp=*x;
    *x=*y;
    *y=temp;
}
void permute(vector<string>&ans,string S,int l,int r)
{
    if(l==r)
      ans.push_back(S);
    else
    {
        for(int i=l;i<=r;i++)
          {
              swap(S[l],S[i]);
              permute(ans,S,l+1,r);
              swap(S[l],S[i]);
          }
    }

}
vector<string> permutation(string S)
{
    //Your code here
    vector<string>ans;
    permute(ans,S,0,S.size()-1);
    sort(ans.begin(),ans.end());
    return ans;
}
int main()
{

    string s;
    cin>>s;
    permutation(s);
}
