class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int c = 0;
        unordered_map<string, int> freq;
        for(auto word: words){
            sort(word.begin(),word.end());
            c+=freq[word];
            freq[word]++;
        }
        return c;
    }
};
