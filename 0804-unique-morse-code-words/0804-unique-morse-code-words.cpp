class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> s;
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string temp = "";
        for(auto word : words){
            temp = "";
            for(auto c : word){
                temp += morse[c - 'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};