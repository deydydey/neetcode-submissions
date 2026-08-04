class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = 0;

        if(matrix.empty()) return false;
        
        int m = matrix.size(); 
        int n = matrix[i].size();
        int high_index = (m * n) - 1 ;
        int low_index  = 0;


        while ( low_index <= high_index ) {
            int mid_index = ((high_index - low_index) / 2) + low_index;
            int i = mid_index / n;
            int j = mid_index % n; 

            if (matrix[i][j] < target){
                low_index = mid_index + 1;
            }else if (matrix[i][j] > target){
                high_index = mid_index - 1; 
                
            }else if(matrix[i][j] == target){
                return true;
            }
        }
        return false; 
    }
};
