class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0,r=n-1;
        for(int i=0;i<n;i++){
            int sum=numbers[l]+numbers[r];
            if(sum==target) return {l+1,r+1};
            else if(sum>target) r--;
            else l++;
        }
        return {};
    }
};