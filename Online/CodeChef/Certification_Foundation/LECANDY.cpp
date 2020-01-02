#include<bits/stdc++.h>

using namespace std;

int main()
{   int T;
    cin>>T;
    while(T--)
    {
       int N,C,sum=0,flag=0;
       cin>>N>>C;
       int arr[N];
       for(int i=0;i<N;i++)
          {  cin>>arr[i];
            sum+=arr[i];
          }
       int r = N/2;
        for(int j=0;j<N;j++)
        {
            if(arr[j]<r && sum>=r){
                flag=1;
                break;
            }else
            {
                sum-=arr[j];
            }   
        }
        if(flag==1)
            cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
        }
        

    }
    return 0;
}