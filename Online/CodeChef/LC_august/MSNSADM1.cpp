#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        long long int max=0;
        cin>>N;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<N;i++){
                int n;
                cin>>n;
                v1.push_back(n);
            }
        for(int i=0;i<N;i++){
                int n;
                cin>>n;
                v2.push_back(n);
            }
        for(int i=0;i<N;i++){
             long long int score=0;
             score=v1[i]*20 - v2[i]*10;
             if(score>=0){
                 if(max<score)
                        max=score;
             }
            }
            cout<<max<<endl;
    }
    return 0;
}