#include <iostream>
#include <vector>
#include <stdint.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int a[32]={0};
        uint32_t num=0;
        int i=0;
        while(n>0)
        {
        	a[i]=n%2;
        	
        	n=n/2;
//        	cout<<a[i];
        	i++;
		}
		for(int j=0;j<i;j++)
		{
			num=num*2+a[j];
		}
		for(int j=0;j<32-i;j++)
		{
			num*=2;
		}
    	return num;	 	 
	}
    
};
int main()
{
	Solution test;

	cout<<test.reverseBits(43261596);
}
