class Solution {
public:
    void back(vector<vector<int>>& r, int n,vector<int>& count, int index, int currcount,int& maxcount){
        if(index==r.size()){
            for(int i=0;i<count.size();i++){
                if(count[i]!=0) return;
            }
            maxcount=max(currcount,maxcount);
            return;
        }
        
        int from=r[index][0];
        int to=r[index][1];
        count[from]--;
        count[to]++;
        
        back(r,n,count,index+1,currcount+1,maxcount);
        
        count[from]++;
        count[to]--;
        
        back(r,n,count,index+1,currcount,maxcount);
        
    }
    
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> count(n,0);
        int maxcount=0;
        back(requests,n,count,0,0,maxcount);
        return maxcount;
    }
};