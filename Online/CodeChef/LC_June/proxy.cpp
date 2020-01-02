#include<bits/stdc++.h>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
    int l=0;
    cin>>l;
    string str;
    cin>>str;
   // cout<<str;
    int cal_p=0,cal_a=0;
    for(int i=0;i<l;i++)
    {
        if(i==0 || i == 1 || i== l-1 || i==l-2){
            if(str.at(i)=='P')cal_p+=1;
        }
        else
            if(str.at(i)=='A') cal_a+=1;
            else cal_p+=1;
    }
    //cout<<cal_p<<" "<<cal_a<<endl;
    int res=abs(floor((l*0.75)+0.5)-cal_p);
    //cout<<res<<endl;
    if(cal_p<=floor((l*0.75)+0.5))
    {
        if(res<=cal_a)cout<<res<<endl;
        else cout<<-1<<endl;
    }
    else cout<<0<<endl;
}
return 0;
}
