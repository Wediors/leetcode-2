#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	int a[nums.size()]={0};
    	int b[nums.size()]={0};
    	int sum=1;
    	vector<int>::iterator it;
    	a[0]=nums.front();
    	b[0]++;
    	for(it=nums.begin()+1;it<nums.end();it++)
    	{
//    		cout<<*it<<endl;
			int temp=0;
			for(int i=0;i<sum;i++)
    		{
    			if(*it==a[i])
    			{
    				b[i]++;
    				temp=1;
//    				cout<<b[i];
//    				cout<<i<<" "<<a[i];
				}
			}
			if(temp == 0)
			{
				a[sum]=*it;
//				cout<<a[sum]<<endl;
				b[sum]++;
//				cout<<b[sum]<<endl;
				sum++;
			}
		}
        for(int i=0;i<sum;i++)
        {
//        	cout<<a[i]<<" "<<b[i]<<endl;
//        	cout<<b[i]<<" "<<nums.size()/2<<endl;
        	if(b[i]>nums.size()/2)
        	{
        		return a[i];
			}
		}
		return 0;
    }
};
int main()
{
	Solution test;
	vector<int> array;
	array.push_back(8);
	array.push_back(8);
	array.push_back(7);
	array.push_back(7);
	array.push_back(7);

	cout << test.majorityElement(array);
}
