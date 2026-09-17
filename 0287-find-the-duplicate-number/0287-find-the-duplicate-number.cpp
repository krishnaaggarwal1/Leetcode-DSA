class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        vector<int> v;
        int x=0;
        unordered_set <int> st;
        for(int num:nums){
            if(st.count(num)==1){
                x= num;
            }
            else{
                st.insert(num);
            }
        }
        return x;
    }
};

/*
int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        for(int i=1;i<nums.size();i++){
            ans=ans^i;
        }
        return ans;
        */