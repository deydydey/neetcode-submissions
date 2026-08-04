class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0; 
        int last = s.length() - 1;
        while(first < last){
            char first_char = std::tolower(s[first]);
            char sec_char = std::tolower(s[last]);

            if(!isalnum(first_char)){
                first++;
                continue;
            }
            else if(!isalnum(sec_char)) {
                last--;
                continue;
            }

            if(first_char != sec_char) return false; 
            first++;
            last--;
        }

        return true;
    }
};
