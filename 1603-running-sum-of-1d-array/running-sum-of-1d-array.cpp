class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();  //size of array;
    vector<int>sum(n); // creating sum vector array;
    sum[0] = nums[0]; // nums ke o index ke value of sum ke o index pe store kraye kyu ki nums 0 index ki value ko hum use kr paaye;
    for(int i=1; i<n; i++){
        sum[i] = nums[i] + sum[i-1];
    }
    return sum;
    }
};