#include<iostream> 
using namespace std; 
int countP(int n, int k) 
{ 
  int dp[n+1][k+1]; 
  for (int i = 0; i <= n; i++) 
     dp[i][0] = 0; 
  for (int i = 0; i <= k; i++) 
     dp[0][k] = 0; 
  
  for (int i = 1; i <= n; i++) 
     for (int j = 1; j <= i; j++) 
       if (j == 1 || i == j) 
          dp[i][j] = 1; 
       else
          dp[i][j] = j * dp[i - 1][j] + dp[i - 1][j - 1]; 
  
  return dp[n][k]; 
} 
int main() 
{ 
   cout <<  countP(5,2); 
   return 0; 
} 