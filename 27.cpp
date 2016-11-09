#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    	if(nums.size() == 0)
    		return 0;
        vector<int>::iterator it;
        for(it=nums.begin();it<nums.end();)
        {
        	if(*it==val)
        	{
        		nums.erase(it);
			}
			else{
				it++;
			} 
		}
		/*if(nums.front()==val)
		{
			nums.erase(nums.begin());
		}*/
		return nums.size();
    }
};
int main()
{
	vector<int>nums;
	nums.push_back(2);
//	nums.push_back(1);
//	nums.push_back(1);
	Solution test;
	cout <<test.removeElement(nums,2);
	vector<int>::iterator it;
        for(it=nums.begin();it<nums.end();it++)
        {
        	cout<<*it<<"¡¡"; 
		}
}
