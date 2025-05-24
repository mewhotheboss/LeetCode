class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();

        int temp;

        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for (int i = 0; i < size; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }

        int cols = sizeof(0)/sizeof(int);

        cout << "[";
        for (int i = 1; i < size; ++i) {
            cout << "[";
            for (int j = 1; j <= cols; ++j) {
                cout << matrix[i][j];
                if (j != cols) cout << ", ";
            }
            cout << "]";
            if (i != size - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
};

