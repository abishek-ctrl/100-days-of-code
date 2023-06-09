class Solution {
public:
    void combo(const vector<int>& candidates, int target, vector<int>& temp, int start,int currSum,vector<vector<int>>& res){
        if(currSum>target) return;
        else if(currSum==target){
            res.push_back(temp);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(i>start and candidates[i]==candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            currSum+=candidates[i];
            combo(candidates,target,temp,i+1,currSum,res);
            temp.pop_back();
            currSum-=candidates[i];
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        combo(candidates,target,temp,0,0,res);
        return res;
    }
};