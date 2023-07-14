class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        int n=ans.size();
        int i=0,j=0;
        int res=0;
        int t=0,f=0;
        while(j<n){
            t+=(ans[j]=='T');
            f+=(ans[j]=='F');
            while(t>k and f>k){
                if(ans[i]=='T') t--;
                else f--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};