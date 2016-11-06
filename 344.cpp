#include<iostream>
#include<string>
using namespace std;
class Solution{
	public:
		string  reverseString(string s){
			int len = s.length();
			for(int i=0;i<len/2;i++)
			{
				char a=s[i];
				s[i]=s[len-1-i];
				s[len-1-i]=a;
			}
			return s;
		}
};
int main()
{
	Solution test;
	string a=test.reverseString("aasd");
	cout << a;
}
