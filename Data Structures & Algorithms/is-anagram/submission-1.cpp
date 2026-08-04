class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map < int, char > word;
        std::unordered_map < int, char> word1; 
        
        if(s.length() != t.length()){
            return false;
        }
        
        for (char i : s){
            word[i]++;
        }
        for (char j : t){
            word1[j]++;
        }
        
        return word == word1;

    }
};
