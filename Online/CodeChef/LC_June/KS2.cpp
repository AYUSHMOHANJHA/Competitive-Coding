#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int T;
    cin>>T;
    while(T--)
    {   long long int s=0;
        string N;
        cin>>N;

        for(int i=0;i<N.length();i++)
            s=s+(N[i]-'0');

        if(s%10==0) s=0;
        else s=10-(s%10);
        cout<<N.append(to_string(s))<<endl;
    }
    return 0;
}