#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min=nums.front();
        vector<int>::iterator it;
        for(it=nums.begin();it<nums.end();it++)
        {
        	if(*it<min)
        		min=*it;
		}
		int sum=0;
		for(it=nums.begin();it<nums.end();it++)
		{
			sum+=*it-min;
		}
		return sum;
    }
};
int main()
{
	Solution test;
	vector<int>test1;
	test1.push_back(1);
	test1.push_back(2);
	test1.push_back(3);
//	test1.push_back(4);
//	test1.push_back(5);
	cout << test.minMoves(test1);
}

