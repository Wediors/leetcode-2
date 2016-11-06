#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
	public:
		int singleNumber(vector<int>& nums) {
		
			vector<int>::iterator it;
			int res=0;
			for(it=nums.begin();it<nums.end();it++)
			{
				
				res = res ^ *it;
			 } 
			return res;
		}
};

int main()
{
	Solution test;
	vector<int> a;
	a.push_back(1);
	cout<< test.singleNumber(a);
}
