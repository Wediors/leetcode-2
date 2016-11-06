#include <iostream>
#include <vector>
#include <stdint.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i=0;
        while(n>0)
        {
        	if(n%2==1)
        	{
        		i++;
			}
        	n=n/2;
		}
		return i;
    }
};
int main()
{
	Solution test;
	cout<<test.hammingWeight(11);
}

