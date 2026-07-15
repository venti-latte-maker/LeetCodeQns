#include<iostream>
#include<vector>
using namespace std;

int climbStairs(int n){     //recursion method
    if(n == 1 || n == 2) return n;

    return climbStairs(n-1) + climbStairs(n-2);
}

int climbStairsMemo(int n, vector<int> &dp){
    if(n == 1 || n == 2) return n;

    if(dp[n] != -1) return dp[n];

    return dp[n] = climbStairsMemo(n-1, dp) + climbStairsMemo(n-2, dp);
}

int climbStairsTab(int n){      //tabulation
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    //memory optimized
    // int prev2 = 1, prev1 = 2;
    //for(int i = 3; i <= n; i++){
    //  result = prev1 + prev2;
    //  prev2 = prev1;
    //  prev1 = result;
    //}

    return dp[n];    
}
int main(){
    int n; cin>>n;
    cout<<"No of ways (recursion) : "<<climbStairs(n)<<endl;
    vector<int> dp_Memo(n+1, -1);
    cout<<"No of ways (memoization) : "<<climbStairsMemo(n, dp_Memo)<<endl;
    cout<<"No of ways (tabulation) : "<<climbStairsTab(n)<<endl;
}