class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map< int, int > value;

        for(int i = 0; i < nums.size(); i++){
            int number = nums[i];
            if(value.find(number) != value.end()) return true;


            value[number] = i;
        }

        return false; 
    }
};