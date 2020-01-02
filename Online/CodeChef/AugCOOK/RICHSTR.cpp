#include<bits/stdc++.h>

using namespace std;
bool richSTR(string s)
{
    int len=s.length();
    if(len>=3)
    {
        int a[26]={0};
        for(int i=0;i<len;i++)
            a[s.at(i)-97]=a[s.at(i)-97]+1;
        sort(a, a+26, greater<int>()); 
         //for(int i=0;i<26;i++)
           //cout<<a[i]<<" ";
        if(a[0]>(len/2)) return true; 
    }
    return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int N,Q;
        cin>>N>>Q;
        string S;
        cin>>S;
        while(Q--){
        int L,R;
        cin>>L>>R;
        string s1= S.substr(L-1,R);
        cout<<s1<<endl;
        cout<<richSTR(s1)<<endl;
        }
        cout<<S;
    }
    return 0;
}