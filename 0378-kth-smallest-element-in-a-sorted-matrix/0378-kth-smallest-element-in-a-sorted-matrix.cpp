class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>> pq; int n = matrix.size(); 
        for(int i=0; i<n; i++) for(int j=0; j<n; j++) pq.push(matrix[i][j]); 
        for(int i=1; i<k; i++) pq.pop(); 
        return pq.top(); 
    }
};