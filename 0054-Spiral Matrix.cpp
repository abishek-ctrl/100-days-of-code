class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> answer;
    vector<vector<int>> direction = {{1,0}, {0,-1}, {-1,0}, {0,1}};
    vector<vector<int>> visited(m, vector<int>(n, 0));
    function<void(vector<int>, int)> traverse = [&](vector<int> coord, int index) {
        if(coord[0] >= m || coord[0] < 0 || coord[1] >= n || coord[1] < 0 || visited[coord[0]][coord[1]] == 1) {
            return;
        }
        answer.push_back(matrix[coord[0]][coord[1]]);
        visited[coord[0]][coord[1]] = 1;
        vector<int> coord2 = {coord[0] + direction[index][0], coord[1] + direction[index][1]};
        if(coord2[0] >= m || coord2[0] < 0 || coord2[1] >= n || coord2[1] < 0 || visited[coord2[0]][coord2[1]] == 1) {
            index = (index + 1) % 4;
        }
        coord2 = {coord[0] + direction[index][0], coord[1] + direction[index][1]};
        traverse(coord2, index);
    };
    traverse({0,0}, 3);
    return answer;
}
};
