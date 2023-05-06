class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        //we create a unordered set to note the strings that we have visited
        unordered_set<string> visited;
        int count=0;
        //we loop through the vector 
        for(string s:strs){
            //if the string was not visited 
            if(visited.count(s)==0){
                //we call the dfs function with 's' as the argument
                dfs(s,visited,strs);
                //we increment the count to indicate that we have found another match
                count++;
            }
        }
        return count;
    }
    //we create a helper function to check if the strings are similar 
    bool isSimilar(string a,string b){
        // if they are equal , we return true
        if(a==b) return true;
        //if their length doesnt match , return false
        if(a.length()!=b.length()) return false;
        int diffcount=0;
        for(int i=0;i<a.size();i++){
            //if the letters dont match in the same index , then increment the diffcount
            if(a[i]!=b[i]) diffcount++;
            //if diffcount is more than 2 , then we return false as we cant swap two bits
            if(diffcount>2) return false;
        }
        return true;
    }
    //depth first search function
    void dfs(string& str, unordered_set<string>& visited, vector<string>& strs){
        //we add the current str to the visited set
        visited.insert(str);
        for(string s:strs){
    //if the 's' in strs in not found in visited and issimilar to the str that was inserted
            if(visited.count(s)==0 and isSimilar(str,s)){
                //we call the dfs and give the current string 's' as the argument
                dfs(s,visited,strs);
            }
        }
    }
    
};
