class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //defining the output to be equal to the given numRows 
        vector<vector<int>> res(numRows);
        //looping through the outer vectors
        for(int i=0;i<numRows;i++){
            //resizing the empty vectors to i+1 and giving values 1 to it
            res[i].resize(i+1,1);
            //leaving out the start we loop through the middle elements
            for(int j=1;i>j;j++){
                //we update the values of the res to the sum of the values of the above values
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res;
    }
};