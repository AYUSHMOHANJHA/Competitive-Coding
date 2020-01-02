#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T=0;
      cin>>T;

    while(T--)
    {   int N=0;
        cin>>N;
        long long int a[N]={0};
        for(int i=0;i<N;i++)
            cin>>a[i];
        long long int n1=0,n2=0;
        for(int j=0;j<N;j++)
                {
                    if(j%2==0) 
                        {
                            n1=n1+a[j];
                            a[j]=n1;
                        }
                    else 
                        {
                            n2=n2+a[j];
                            a[j]=n2;
                        }
                }
                for(int i=0;i<N;i++)
                    cout<<a[i]<<" ";
                cout<<"\n";       
    }

    return 0;
}