class Solution {
public:
    bool isValid(string s) {
        std::stack<char> valid;

        for(const auto& c : s){
            if (c != ')' && c != '}' && c != ']') {
                valid.push(c);
            }else{

                if(valid.empty()) return false; 
                char top = valid.top();

                if (c == ')' && top == '('){
                    valid.pop(); 
                }else if (c == '}' && top == '{'){
                    valid.pop(); 
                }else if (c == ']' && top == '['){
                    valid.pop(); 
                }else return false;
            }
            
        }
        return valid.empty() ? true : false;
    }
};
