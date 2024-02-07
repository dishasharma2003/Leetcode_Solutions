class Solution {
public:
int find_max(vector<vector<int>> &matrix,int mid,int n){
    int index=-1;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(matrix[i][mid]>max){
            max=matrix[i][mid];
            index=i;
        }

    }
    return index;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row=find_max(mat,mid,n);
            int element=mat[row][mid];
            int left=mid-1>=0?mat[row][mid-1]:-1;
            int right=mid+1<m?mat[row][mid+1]:-1;
            if(element>left && element>right){
                return {row,mid};
            }
            else if(element<left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return {-1,-1};
    }
};