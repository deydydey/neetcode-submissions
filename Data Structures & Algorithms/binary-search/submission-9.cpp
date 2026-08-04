class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low_index = 0;
        int high_index = nums.size() - 1;


        while(low_index <= high_index){
            int mid_index  = ((high_index - low_index) / 2) + low_index;

            if(nums[mid_index] ==  target){
                return mid_index;
            }

            if(nums[mid_index] < target){
                low_index  = mid_index + 1;
            }

            if(nums[mid_index] > target){
                high_index = mid_index - 1;
            }

        }

        return -1;
    }
};
