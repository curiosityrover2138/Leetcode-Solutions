class Solution {
public:
    int dp[1001];
    bool helper(int n, bool res){
        if (dp[n] != -1)
            return dp[n];
        if (n < 2) {
            dp[n] = res;
            return res;
        }
        for (int i = 1; i <= sqrt(n)+1; i++){ //looping through 1 to sqrt n to mee the condition
            
            if (n % i == 0 && helper(n-i, !res) == !res) {
                dp[n] = !res;
                return !res;    // for each n, we store the value in the dp array for later use
            }
        }
        dp[n] = res;
        return res;
    }
    
    bool divisorGame(int n) {
        for (int i = 0; i < 1001; i++)
            dp[i] = -1;
        return helper(n, false);// we can check if the player wins or not by
        //recursively calling the helper function
    }
};
