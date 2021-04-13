//Find all possible palindromic partitions of a String

#include<iostream>
#include<vector>

using namespace std;
bool isPalindrome(string s)
{
    int beg=0,endd=s.length()-1;
    while(beg<=endd)
    {
      if(s[beg]!=s[endd])
         return false;
       beg++;
       endd--;
    }
    return true;

}
void permutation(vector<string>&ans,string ip,string op)
{
    if(ip.size()==1 )
    {
        if(isPalindrome(op+ip))
            ans.push_back(op+ip);
        return;
    }
     string op1=op+ip[0];
     string op2=op+ip[0]+" ";
     ip.erase(ip.begin()+0);
     permutation(ans,ip,op1);
     permutation(ans,ip,op2);



}



int main()
{
    string s;
    cin>>s;
    vector<string>ans;
    permutation(ans,s,"");
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;



}
