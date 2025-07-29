class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums.size();
        long long actualsum = ((range*(range +1))/2);

        int currentsum = 0; 

        for (int i = 0; i < nums.size(); i++){
            currentsum = currentsum + nums[i];
        }
        return actualsum - currentsum ;
    }
    
};