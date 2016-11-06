#include <iostream>
using namespace std;
class Solution{
	public:
		bool canWinNim(int n)
		{
			if(n%4==0)
			{
				return false;
			}
			else{
				return true;
			}
		}
};
int main()
{
	Solution test;
	if(test.canWinNim(4) == true)
	{
		cout<<"win"<<endl;
	}
	else{
		cout<<"false"<<endl; 
	} 
	
}
