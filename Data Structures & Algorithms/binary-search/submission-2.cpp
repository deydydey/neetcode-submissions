class Solution {
public:
    int search(vector<int>& nums, int target) {
        std::unordered_map< int, int > value; 

        for(int i = 0; i < nums.size(); ++i){
            value[nums[i]] = i;
        }
        if(value.find(target) != value.end()) return value[target];
        else return -1;
    }
};
