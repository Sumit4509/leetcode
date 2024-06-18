class Solution {
    public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
        List<int[]> infos = new ArrayList<>();
        for (int i = 0; i < difficulty.length; i++) {
            infos.add(new int[]{difficulty[i], profit[i]});
        }
        infos.sort((a, b) -> a[0] - b[0]);
        
        List<int[]> maxProfitForDifficulty = new ArrayList<>();
        int maxp = 0;
        for (int[] info : infos) {
            int d = info[0], p = info[1];
            maxp = Math.max(maxp, p);
            maxProfitForDifficulty.add(new int[]{d, maxp});
        }
        
        int totalProfit = 0;
        for (int w : worker) {
            int ind = binarySearch(maxProfitForDifficulty, w);
            if (ind >= 0 && w >= maxProfitForDifficulty.get(ind)[0]) {
                totalProfit += maxProfitForDifficulty.get(ind)[1];
            }
        }
        return totalProfit;
    }
    
    private int binarySearch(List<int[]> list, int target) {
        int left = 0, right = list.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (list.get(mid)[0] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
}