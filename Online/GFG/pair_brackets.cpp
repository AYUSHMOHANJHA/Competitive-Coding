#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    cin.ignore();
    while(T--)
    {
        string s;
        getline(cin,s);
        int l=s.length();
        cout<<l<<endl;
        vector<pair<int,int>>v;
        int i=0,j=0,rear=l;
        for( i=0;i<l;i++)
        {
            if(s[i]=='(')
            {//cout<<i<<endl;
                for(j=i+1;j<rear;j++)
                {
                    if(s[i]==')')
                    {    v.push_back(make_pair(i,j));
                    rear--;
                    }
                }
            }
        }
        cout<<v.size()<<endl;
        for(int k=0;k<v.size();k++)
            {
                cout<<v[k].first<<" "<<v[k].second<<endl;
            }
    }
    return 0;
}