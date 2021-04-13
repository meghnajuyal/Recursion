#include <iostream>
using namespace std;

int find(int n)
{
    if (n == 2||n==3)
        return 2;
    else
     return 2*find(n/2);

}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<find(n);
	    cout<<endl;
	}
	return 0;
}
