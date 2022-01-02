// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
   int kThSmallestFactor(int N , int K) {
        
        // code here
        map<int,int>mp;
        for(int i=1;i*i<=N;i++){
            if(N%i==0){
                int temp = N/i;
                mp[i]++;
                mp[temp]++;
            }
        }
        if(mp.size()<K) return -1;
        else{
            int k = 1;
            for(auto it = mp.begin();it!=mp.end();it++,k++){
                if(k==K){
                    int ans = it->first;
                    return ans ;
                }
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;

        Solution ob;
        cout << ob.kThSmallestFactor(N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends