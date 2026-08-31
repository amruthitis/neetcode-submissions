class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n = matrix[0].size();
        int t = m*n;
        int l=0, r= t-1;

        while (l<=r){
            int mid = (int)(l+r)/2;
            int i = (int) mid / n;
            int j = (int) mid % n;

            int mid_num = matrix[i][j];

            if(mid_num == target){
                return true;
            } 
            else if(mid_num < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return false;

    }
};
