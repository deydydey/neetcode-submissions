class Solution {
public:
    bool isPalindrome(string s) {
        int r = s.size() - 1; 
        int l = 0;

        while(l < r){
            if (!isalnum(s[r])){
                r--; 
                continue;
            } 

            if (!isalnum(s[l])){
                l++; 
                continue;
            }

            if(tolower(s[r]) != tolower(s[l])) return false;
            
            l++;
            r--;
        }
        return true;
    }
};
