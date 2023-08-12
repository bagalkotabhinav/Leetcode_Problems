class Solution {
public:
    vector<int> row_binary_search(vector<vector<int>>& matrix,int row_start, int row_end,int target){
            if(row_end>=row_start){
                int mid=(row_start+row_end)/2;
                if(target>=matrix[mid][0] && target<=matrix[mid][matrix[mid].size()-1])
                    return matrix[mid];
                if(target>matrix[mid][matrix[mid].size()-1]){
                    return ans(matrix,mid+1,row_end,target);
                }
                if(target<matrix[mid][0]){
                    return ans(matrix,row_start,mid-1,target);
                }
            }
        return {};
    }
    bool ele_binary_search(vector<int>& row, int target, int l, int r){
        if(r>=l){
            int mid=(l+r)/2;
            if(row[mid]==target)
                return true;
            if(row[mid]>target)
                return binary_search(row,target,l,mid-1);
            if(row[mid]<target)
                return binary_search(row,target,mid+1,r);
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> row=row_binary_search(matrix,0,matrix.size()-1,target);
        if(ele_binary_search(row,target,0,row.size()-1))
            return true;
        return false;
    }
};

//center element in matrix
//compare target with: center element
// if greater, compare with last ele of row ->1
// if lesser, compare target with first ele of row ->2
//if in ->1: target>last ele of row, recursively reduce the size of matrix removing the top rows
// same for column wise

