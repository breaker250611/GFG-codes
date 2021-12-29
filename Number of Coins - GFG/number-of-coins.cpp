// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	     vector<int>dp(V+1,-1);
	    dp[0]=0;
	    sort(coins,coins+M);
	    for(int i=1;i<V+1;i++){
	        for(int j=0;j<M;j++){
	            int coin = coins[j];
	            if(coin<=i){
	                int prev = dp[i-coin];
	                if(dp[i]==-1&&prev!=-1){
	                    dp[i]= prev+1;
	                }
	                else if(prev!=-1){
	                    dp[i]=min(dp[i],prev+1);
	                }
	            }
	        }
	    }
	    return dp[V];
	    } 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends