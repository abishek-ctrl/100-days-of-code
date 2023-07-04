class Solution {
public:
    void help(vector<int>& temp, vector<vector<int>>& res ,vector<int>& nums,int freq[]){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                temp.push_back(nums[i]);
                freq[i]=1;
                help(temp,res,nums,freq);
                temp.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        vector<int> temp;
        help(temp,res,nums,freq);
        return res;
    }
};