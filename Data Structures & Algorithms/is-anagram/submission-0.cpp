class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map < int, char > word;
        std::unordered_map < int, char> word1; 
        for (char i : s){
            word[i]++;
        }
        for (char j : t){
            word1[j]++;
        }
        
        if (word == word1) return true; 
        else return false;

    }
};
