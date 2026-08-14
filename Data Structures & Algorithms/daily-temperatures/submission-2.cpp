class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::stack< int > ordered_stack;
        vector< int > result(temperatures.size(), 0);

        for(int i = 0; i < temperatures.size(); i++){
            while(!ordered_stack.empty() &&  temperatures[i] > temperatures[ordered_stack.top()]){
                int past_day = ordered_stack.top();
                ordered_stack.pop();

                result[past_day] = i - past_day;

            }

            ordered_stack.push(i);

        }
        return result;
    }
};
