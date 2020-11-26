#include <iostream>
#include <vector>


using namespace std;






class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>>ans;
		for (int i = 0; i < numRows; i++) {
			vector<int>tmp(i + 1, 1);
			for (int j = 1; j < tmp.size() - 1; j++) {
				tmp[j] = (ans[i - 1][j - 1] + ans[i - 1][j]);
			}
			ans.push_back(tmp);
		}
		return ans;
	}
};