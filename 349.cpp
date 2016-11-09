class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>::iterator it,it2;
        vector<int>temp;
        for(it=nums1.begin();it<nums1.end();it++)
        {
			for(it2=nums2.begin();it2<nums2.end();it2++)
			{
				if(*it2==*it)
				{
					if(fun(temp,*it2))
					{
						temp.push_back(*it2);
					}
				}
			}
		}
		return temp;
    }
    bool fun(vector<int> temp, int num)
    {
       	vector<int>::iterator it1;
        	for(it1=temp.begin();it1<temp.end();it1++)
        	{
        		if(num == *it1)
        		{
        			return false;
				}
			}
			return true;	
		}
	
};
