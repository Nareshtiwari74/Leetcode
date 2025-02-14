class ProductOfNumbers {
public:
    vector<int> dp; 
    int lastZeroIndex = -1; 
    
    ProductOfNumbers() {
        dp = {1}; 
    }
    
    void add(int num) {
        if (num == 0) {
            dp = {1}; 
            lastZeroIndex = dp.size(); 
        } else {
            dp.push_back(dp.back() * num); 
        }
    }
    
    int getProduct(int k) {
        int n = dp.size();
        if (k >= n) return 0;  
        return dp.back() / dp[n - k - 1];
    }
};
