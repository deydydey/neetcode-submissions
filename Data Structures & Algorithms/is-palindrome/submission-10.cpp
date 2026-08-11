class Solution {
public:
    bool isPalindrome(string s) {
        int r = s.size() - 1; 
        int l = 0;

        while(l <= r){
            while(!isalnum(s[r]) && l < r){
                r--; 
            } 

            while (!isalnum(s[l]) && l < r){
                l++; 
            }

            if(tolower(s[r]) != tolower(s[l])) return false;
            r--; 
            l++;
        }
        return true;
    }
};
