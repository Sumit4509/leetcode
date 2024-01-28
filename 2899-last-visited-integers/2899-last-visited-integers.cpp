class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int>numbers;
        int i=-1 ;
        vector<int>ans;
        for(auto it: words){
            string curr = it ; 
            if(curr=="prev"){
                if(i==-1){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(numbers[i]);
                    i--;
                }
            }
            else{
                int num = stoi(curr);
                numbers.push_back(num);
                i=numbers.size()-1;
            }
        }
        return ans ;
    }
};