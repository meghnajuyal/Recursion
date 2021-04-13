#include<iostream>
using namespace std;


void TOH(char s,char d,char h,int n)
{
    if(n==1)
    {
        cout<<"\nmoving disk "<<n<< " from "<<s <<" to "<<d;
        return;
    }
    TOH(s,h,d,n-1);
    cout<<"\nmoving disk "<<n<< " from "<<s <<" to "<<d;
    TOH(h,d,s,n-1);


}



int main()
{
  int n = 3; // Number of disks
    TOH('A', 'C', 'B',n); // A, B and C are names of rods
    return 0;
}
