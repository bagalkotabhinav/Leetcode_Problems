class Solution {
public:
    void calc (vector<int>& nums, vector<vector<int>>& ans, int pos){
        if(pos==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=pos;i<nums.size();i++){
            swap(nums.at(i),nums.at(pos));
            calc(nums,ans,pos+1);
            swap(nums.at(pos),nums.at(i));
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        vector<vector<int>> ans;
        //Visualise that calc appends your swapped array to 2d vector ans
        calc(nums,ans,0);
        return ans;
    }
};
