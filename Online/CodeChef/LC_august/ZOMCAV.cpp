#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int T;
	cin >> T;
	while (T--)
	{
        long long int N;
	    cin >> N;
	    vector <long long int> arr1,arr2,arr3((N+1),0);
	   //loop to take input 
	    for (long long int i=0; i<N; i++)
	    {
	        long long int x;
	        cin >> x;
	        arr1.push_back(x);
	    }
	    for (long long int i=0; i<N; i++)
	    {
	        long long int x;
	        cin >> x;
	        arr2.push_back(x);
	    }
	    
	    for(long long int  i=0; i<N; i++)
	    {
	        long long int l = ((i - arr1[i]) >= 0) ? (i - arr1[i]) : 0;
	        long long int r = ((i + arr1[i]) < N) ? (i + arr1[i]) : (N-1);
	        
	       arr3[l] += 1;
           arr3[r+1] -= 1;
	        
	      
	    }
	    for(long long int i=1; i<N; i++)
             arr3[i] += arr3[i-1];
        
        arr3.resize(N);
        
	    sort (arr3.begin(),arr3.end());
	    sort (arr2.begin(),arr2.end());
	    
	    if (arr2 == arr3)
             cout << "YES" << endl;
	    else
             cout << "NO" << endl;
	    
	}
	return 0;
}