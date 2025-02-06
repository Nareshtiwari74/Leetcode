class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //     int n =nums.size();
    //     vector<int> left(n, 1);
    //     vector<int> right(n,1);
    //     vector<int> res(n,1);

    //     for(int i=1;i<n;i++)
    //         left[i]=left[i-1]*nums[i-1];
        

    //     for(int i=n-2;i>=0;i--)
    //         right[i]=right[i+1] * nums[i+1];
    
    //  for (int i = 0; i < n; i++) 
    //         res[i] = left[i] * right[i];
        
    //     return res;
    int n=nums.size();
    int zecount=0;
    int zcindex=-1;
    int mul=1;
    vector<int> ans(n,0);
  
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            zecount++;
            zcindex=i;
        }
        else{
            mul = mul*nums[i];
        }
    }
    if(zecount>1){
        return ans;
    }
    else if (zecount == 1) {
        ans[zcindex] = mul;
        return ans;
    }

    
    for (int i = 0; i < n; i++) {
        ans[i] = mul / nums[i];
    }

    return ans;
}
};