class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0); 
        std::stack<int> sort; 
        int current;

        for (int i = 0; i < temperatures.size(); i++){  
            while( !sort.empty() && temperatures[sort.top()] < temperatures[i]){
                current = sort.top();
                sort.pop();

                result[current] = i - current;

            }
            sort.push(i);
        }
        return result;
    }
};
