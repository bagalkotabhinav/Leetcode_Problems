class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        double ans;
        vector<int> v;
        for(auto x:nums1)
            v.push_back(x);
        for(auto x:nums2)
            v.push_back(x);
        sort(v.begin(),v.end());
        if((v.size()%2)!=0)
            ans=v[v.size()/2];
        else{
            double x=v[v.size()/2];
            double y=v[(v.size()/2)-1];
            ans=(x+y)/2;
        }
        return ans;
    }
};
