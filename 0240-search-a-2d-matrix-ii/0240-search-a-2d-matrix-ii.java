class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int lb=0;
        int ub=matrix[0].length-1;
        while(lb<matrix.length&&ub>=0){

            if(matrix[lb][ub]==target){
                return true;
            }
            else if(matrix[lb][ub]>target){

                ub--;
            
            }
            else {
                lb++;
            }
        }
        return false;
        
    }
}