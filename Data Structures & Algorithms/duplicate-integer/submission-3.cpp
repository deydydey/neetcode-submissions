class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> value; 
        for(const auto& num : nums){
            if (value.find(num) != value.end()) return true;
            value.insert(num);
        }
        return false;
        
    }
};