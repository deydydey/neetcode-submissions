class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map <int, int> two_sums; 

        for(int i = 0; i < nums.size(); i++){
            int compliment = target - nums[i];

            if (two_sums.find(compliment) != two_sums.end()){
                return {two_sums[compliment], i};
            }

            two_sums[nums[i]] = i;

        }
        return {};
    }
};
