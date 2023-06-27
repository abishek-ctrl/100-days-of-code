#define pp 

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1 = nums1.size(),n2 = nums2.size();
        vector<vector<int>> ans;  
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        for (int i = 0; i < k && i < n1; i++)
            pq.push({nums1[i] + nums2[0], {i, 0}});

        while (k > 0 && !pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            
            int fir = curr.second.first;
            int sec = curr.second.second;

            ans.push_back({nums1[fir], nums2[sec]});

            if (sec + 1 < n2) {
                pq.push({nums1[fir] + nums2[sec + 1], {fir, sec + 1}});
            }
            k--;
        }
        return ans;
    }
};