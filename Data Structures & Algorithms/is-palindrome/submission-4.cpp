class Solution {
public:
    bool isPalindrome(string s) {
        int r = s.size() - 1; 
        int l = 0;
        std::string newStr; 
        for(const auto& c : s){
            newStr += tolower(c);
        }

        while(l < r){
            if (!isalnum(newStr[r])){
                r--; 
                continue;
            } 

            if (!isalnum(newStr[l])){
                l++; 
                continue;
            }

            if(newStr[r] != newStr[l]) return false;
            
            l++;
            r--;
        }
        return true;
    }
};
