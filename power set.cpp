

vector<string> ans;
void power(string ip,string op="")
{
    if(ip.length()==0)
    {
       ans.push_back(op);
       return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    power(ip,op1);
    power(ip,op2);

}
