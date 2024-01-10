class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector <int> ans = heights;
        for (int i = 0; i < ans.size(); ++i) 
        {
            for (int j = i + 1; j < ans.size(); ++j) 
            {
                if (ans[i] < ans[j]) 
                {
                    int a = ans[i];
                    ans[i] = ans[j];
                    ans[j] = a;
                }
            }
        }
        vector <string> name=names;
        
        for(int i=0;i<heights.size();i++){
            for (int j=0;j<heights.size();j++){
                if(ans[i]==heights[j]){
                    name[i]=names[j];
                    break;
                }
            }
        }
        return name;
    }
};