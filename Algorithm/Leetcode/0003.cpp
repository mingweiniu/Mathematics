// 1476 Subrectangle Queries    


class SubrectangleQueries {
private:
    vector<vector<int>>& rectangle;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle)
        :rectangle(rectangle)
    {
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int row = row1; row <= row2; ++row)
        {
			auto r_begin = rectangle[row].begin() + col1;
			auto r_end = rectangle[row].begin() + col2 + 1;
			for_each(r_begin, r_end, [&newValue](int& n) {
				n = newValue;
				});
        }
    }
    
    int getValue(int row, int col) {
        return rectangle[row][col];
    }

};


// reference from https://leetcode.com/problems/subrectangle-queries/discuss/1096104/c%2B%2B-very-fast-beats-99