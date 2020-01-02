#include<bits/stdc++.h>
using namespace std;
int main(){
    int T=0;
    cin>>T;
    while(T--){
        long long int n,res=0;
        cin>>n;
        int f=0;
        for(long long int i=2;i<n/2;i++)
        {
            if(n%i==0){
                f=f+1;
            }
        }
        if(f==1){
            cout<<1<<endl;
        }
        else
        {
            for(long long int i=2;i<n;i++)
        {
            if(n%i==0){
                cout<<i<<endl;
                break;
            }
        }
        }     
 }return 0;
}
