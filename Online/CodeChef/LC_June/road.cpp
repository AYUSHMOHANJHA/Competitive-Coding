#include<bits/stdc++.h>
using namespace std;

long long int cal(int N) 
{ 
    long long  int a=2;
    long long int res=1;
    while(N>0)
    {
        if(N&1) 
             res=(res*a)%1000000007;
             
        a=(a*a)%1000000007;
        N=N>>1;
    }
    return (res*10)% 1000000007;
 
} 


int main()
{
   long long int N,T;
   cin>>T;
   while(T--)
   {
       cin>>N;
       N=N-1;
       cout<<cal(abs(N))<<endl;
   }
}