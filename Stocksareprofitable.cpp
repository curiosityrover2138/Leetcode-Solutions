int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxpro=0;
    int minprice=prices[0];
    for(int i=0;i<prices.size();i++)
    {
        minprice=min(minprice,prices[i]);
        maxpro=max(maxpro,prices[i]-minprice);
    }
    return maxpro;
}
