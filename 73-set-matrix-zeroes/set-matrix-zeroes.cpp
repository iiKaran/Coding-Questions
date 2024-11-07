class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int , bool> rows ; 
        unordered_map<int , bool> col ; 
        vector<pair<int , int> > zeros ; 
        for( int i =0; i < matrix.size(); i++)
        {
            for( int j =0; j < matrix[i].size(); j++)
            {
                int elem = matrix[i][j]; 
                if(elem == 0)
                {
                    zeros.push_back({i,j}); 
                }
            }
        }


        // now marking ; 
        for( int i=0; i < zeros.size(); i++)
        {
            int c_row = zeros[i].first ; 
            int c_col = zeros[i].second; 
            if(!rows[c_row])
            {
                // mark rows as zero
                for( int j = 0 ; j < matrix[0].size(); j++)
                {
                    matrix[c_row][j]=0 ; 
                }
            }
            if(!col[c_col])
            {
                // mark rows as zero
                for( int j = 0 ; j < matrix.size(); j++)
                {
                    matrix[j][c_col]=0 ; 
                }
            }
            rows[c_row]= true ; 
            col[c_col]= true ; 
        }
    }
};