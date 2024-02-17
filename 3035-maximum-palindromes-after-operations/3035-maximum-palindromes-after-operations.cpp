class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& w) {
        vector<int>t;
        map<char,int>m;
        int n=w.size();
        for(int i=0;i<n;i++) {
            for(auto j:w[i])
                m[j]++;
            t.push_back(w[i].size());
        }
        int pairs=0,odd=0;
        for(auto i:m) {
            int sz=i.second/2;
            pairs=pairs+sz;
            if(i.second%2!=0) {
                odd++;
            }
        }
        sort(t.begin(),t.end());
        int i=0;
        int ans=0;
        while(i<n) {
            if(t[i]%2!=0) {
                if(odd<0) {
                    pairs=pairs-1;
                    odd++;
                    t[i]=t[i]-1;
                } else {
                    odd--;
                    t[i]=t[i]-1;
                }
                if(t[i]==0) {
                    ans++;
                    i++;
                    continue;
                }
            }
           if(t[i]%2==0) {
               pairs=pairs-t[i]/2;
               if(pairs>=0)
                ans++;
           }
           i++;
        }
        return ans;
    }
};