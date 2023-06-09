class Solution {
public:
    void combo(const vector<int>& candidates,int target, vector<int>& currComb,int currSum,int currIndex,vector<vector<int>>& res){
        if(currSum>target) return;
        else if(currSum==target){
            res.push_back(currComb);
            return;
        }
        for(int i=currIndex;i<candidates.size();i++){
            currComb.push_back(candidates[i]);
            currSum+=candidates[i];
            combo(candidates,target,currComb,currSum,i,res);
            currComb.pop_back();
            currSum-=candidates[i];
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> currComb;
        combo(candidates,target,currComb,0,0,res);
        return res;
    }
};