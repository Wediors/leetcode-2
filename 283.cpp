class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sum = 0;
		vector<int>::iterator it;
		vector<int> temp;
	
		for(it=nums.begin();it<nums.end();it++)
		{
			if(*it!=0)
			{
				temp.push_back(*it);
				sum++;
			}
		 } 
		 for(int i=0;i<nums.size()-sum;i++)
		 {
		 	temp.push_back(0);
		 }
		 nums=temp;
    }
};
