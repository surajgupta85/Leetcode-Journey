class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size(); // array ka size nikal ne ke liye .size();
    vector<int>ans(2*n);//double of n and n= size of arrqay;
    // array mai traverse
    for(int i=0; i<n; i++){
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }
    return ans;

        
       
    }
};