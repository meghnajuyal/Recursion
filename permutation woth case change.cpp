
#include <bits/stdc++.h>
using namespace std;
vector<string>ans;
void permutation(string ip,string op)
{
  if(ip.size()==0)
    {
        ans.push_back(op);
         return;

    }

    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);


    permutation(ip,op1);
    permutation(ip,op2);
}
int main() {
	//code


	    string s;
	    cin>>s;
	    ans.clear();
	    permutation(s,"");
	    for(int i=0;i<ans.size();i++)
	      cout<<ans[i]<<" ";
	    cout<<endl;

	return 0;
}
