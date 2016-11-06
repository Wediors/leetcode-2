#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
    	if(n==1)
    	{
    		return true;
		}
		if(n<=0)
    	{
    		return false;
		}
        while(n>1)
        {
        	int sum=n/2;
        	if(sum*2 != n)
        	{
        		return false;
			}
			n/=2;
		}
		return true;
    }
};
int main()
{
	Solution test;
	cout << test.isPowerOfTwo(2);
}
