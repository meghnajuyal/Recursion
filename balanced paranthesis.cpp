#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
void solve(int open,int close,string op)
{
    if(open==0 && close==0)
    {
        ans.push_back(op);
        return;
    }

    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
        solve(open-1,close,op1);
    }
    if(close>open)
    {
        string op2=op;
        op2.push_back(')');
         solve(open,close-1,op2);
    }
}
int main()
{

    int n;
    cout<<"Enter n ";
    cin>>n;
    solve(n,n,"");

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";

}
