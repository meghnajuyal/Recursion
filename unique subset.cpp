#include <bits/stdc++.h>
using namespace std;
void func(string ip,string op,set<string> &v)
{
    if(ip.size() == 0)
    {
        v.insert(op);
        return ;
    }
    string op1 = op;
    string op2 = op+ip[0];
    ip.erase(ip.begin()+0);
    func(ip,op1,v);
    func(ip,op2,v);
}
int main() {
	//code


	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    string ip;
	    string op ="";
	    sort(a,a+n);
	    for(int i:a)
        {
            ip+=to_string(i);
        }

        set<string>v;
        func(ip,op,v);
        for(auto i:v)
        {
            cout<<"(";

            int b = 0;
            for(auto j:i)
            {
                if(b==0)
                {
                    cout<<j;
                    b++;
                }
                else
                {
                    cout<<" "<<j;
                }
            }
            cout<<")";
        }
        cout<<endl;

	return 0;
}
