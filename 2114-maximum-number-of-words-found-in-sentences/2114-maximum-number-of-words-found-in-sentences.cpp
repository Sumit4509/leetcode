class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        for(int i=0;i<sentences.size();i++){
            int count2=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    count2++;
                }
            }
            if(count2>count){
                count=count2;
            }

        }
        return count+1;
    }
};