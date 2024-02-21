class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size(); 
        int i =0, j = n-1 ; 

        while( i <= j)
        {
            swap(matrix[i], matrix[j]); 
            i++; 
            j--;
        }
        
        for( int i =0; i < n ; i++){
         for( int j =i; j < n ; j++){
           swap(matrix[i][j],matrix[j][i]);
         }
        }
    }
};