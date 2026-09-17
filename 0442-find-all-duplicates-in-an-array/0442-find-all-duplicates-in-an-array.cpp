class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        vector<int> v;
        unordered_set <int> st;
        for(int num:nums){
            if(st.count(num)==1){
                v.push_back(num);
            }
            else{
                st.insert(num);
            }
        }
        return v;
    }
};