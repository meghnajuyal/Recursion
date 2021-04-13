#include <bits/stdc++.h>
using namespace std;
vector<string>ans;
void permutation(string ip,string op)
{
  if(ip.size()==1)
    {
        ans.push_back(op+ip);
         return;

    }

    string op1=op+ip[0];
    string op2=op+ip[0]+" ";
    ip.erase(ip.begin()+0);


    permutation(ip,op2);
    permutation(ip,op1);
}
int main() {
	//code


	    string s;
	    cin>>s;
	    ans.clear();
	    permutation(s,"");
	    for(int i=0;i<ans.size();i++)
	      cout<<"("<<ans[i]<<")";
	    cout<<endl;

	return 0;
}
