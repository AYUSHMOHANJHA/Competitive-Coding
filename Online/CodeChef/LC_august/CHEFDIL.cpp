#include<bits/stdc++.h>
using namespace std;
int main(){
    int T=0;
    cin>>T;
    while(T--){
        string S;
        cin>>S;
        int c=0;
        for(int i=0;i<S.length();i++)
            if(S.at(i)=='1') c++;
    cout<< ((c%2!=0) ? "WIN":"LOSE")<<endl;
    }return 0;
}
