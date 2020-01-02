/*
Author:Ayush Jha
-----------------------
Goldman Sach Question 2:
------------------------
Take an array an pint an another array and each element is the product of rest of array element 
test case 1:
5
1 3 2 4 5
120 40 60 30 24
test case 2:
3
4 10 3
30 12 40
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v2;
    int n;
    cin>>n;
   for(int i=0;i<n;i++)
    {   int a;
        cin>>a;
        v.push_back(a);
    }
    int res=1;
    for(int i=0;i<n;i++)
    {
        res=res*(v[i]);
        v2.push_back(res);
    }
    int v3[n]={1};
    int res1=v[n-1];
    v3[n-1]=res1;
    for(int i=n-2;i>0;--i)
    {   res1=res1*(v[i]);
        v3[i]=res1;
    }
    v[0]=v3[1];
    int j=1;
    for(j=1;j<n-1;j++)
        v[j]=v2[j-1]*v3[j+1];
    v[j]=v2[j-1];
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}