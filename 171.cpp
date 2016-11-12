#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
        	sum+=(s[i]-'A'+1)*pow(26,(s.size()-1-i));
		}
		return sum;
    }
};
int main()
{
	Solution test;
	cout<<test.titleToNumber("AA");
}
