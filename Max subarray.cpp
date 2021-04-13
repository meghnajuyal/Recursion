/*Given an array of integers Arr of size N and a number K.
Return the maximum sum of a subarray of size K.*/
#include<bits/stdc++.h>
using namespace std;



 int maximumSumSubarray(int K, int Arr[] , int N){
        // code here
        int i=0,j=0,sum=0,mx=INT_MIN;
        while(j<N)
        {
          sum+=Arr[j];

          if(j-i+1==K)
           {
               mx=max(sum,mx);
               sum-=Arr[i];
               i++;

           }
           j++;
        }
        return mx;
}
int main()
{

    int a[]={100,200,300,400};
    cout<<maximumSumSubarray(2,a,4);
    return 0;
}
