class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> countMap;

        for(char c: s){
            countMap[c]++;
        }
        for(char c: t){
            countMap[c]--;
            if(countMap[c]<0){
                return false;
            }
        }
        return true;
    }
};