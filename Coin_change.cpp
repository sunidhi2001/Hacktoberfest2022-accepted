
#include <bits/stdc++.h>

using namespace std;

 int coinChange(vector<int>& coins, int amount) {
      int size= coins.size();
      vector<vector<long long>> dp(size+1 , vector<long long>(amount+1,0));
      for(int i=0 ;i<=size;i++)
      {
          dp[i][0]=0;
       }
         for(int j=0 ;j<=amount;j++)
       {
          dp[0][j]=INT_MAX;
       }
        for(int i=1 ;i<=size;i++)
       {
            for(int j=1 ;j<=amount ;j++)
            {
                if(coins[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else 
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
            }
       }
    if(dp[size][amount]==INT_MAX) return -1;
    return dp[size][amount];
}
int main() 
{
  vector<int>coins = {1,2,5};
  int amount = 11;
  cout<<"Minimun number of coins required to obtain "<<amount<<" is "<<coinChange(coins, amount)<<endl;
  return 0;
}
