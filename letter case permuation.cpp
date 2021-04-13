#include<bits/stdc++.h>
using namespace std;
vector<string>ans;

void permutation(string ip,string op="")
{
    if(ip.size()==0)
    {
        ans.push_back(op);
        return;
    }
    if(isdigit(ip[0]))
    {

        string op1=op+ip[0];
        ip.erase(ip.begin()+0);
        permutation(ip,op1);

    }
    else
    {
        string op1=op;
        string op2=op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));

        ip.erase(ip.begin()+0);
        permutation(ip,op1);
        permutation(ip,op2);

    }

}

int main()
{
    string s;
    cin>>s;

    permutation(s);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}

