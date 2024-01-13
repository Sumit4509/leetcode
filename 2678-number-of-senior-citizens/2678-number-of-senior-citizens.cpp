class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res = 0;
        for (auto info: details)
            if (stoi(info.substr(11, 2)) > 60) res++;

        return res;
    }
};