#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int T,l;
	cin>>T;
	while(T--)
	{
	    cin>>l;
	    string str;
	    cin>>str;
	    int cal_p=0,cal_a=0;
	    for(int i=0;i<l;i++)
	    {
	        if(str[i]=='P')
                cal_p++;
	        if(str[i]=='A' && i>1 && i<l-2&&(str[i-1]=='P'||str[i-2]=='P') && (str[i+1]=='P'||str[i+2]=='P'))
	          cal_a++;
	    }   
	    long long res=ceil(float(3*l)/float(4));
	    if(res-cal_p<=0)cout<<"0"<<endl;
	    else if(res-cal_p>0 && res-cal_p<=cal_a)cout<<res-cal_p<<endl;
	    else  cout<<"-1"<<endl;
	}
	return 0;
}