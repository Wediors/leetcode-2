#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
        string str;
        while(n-->0)
        {
        	str+=(n%26)+'A';
        	n=n/26;
		}
		string str1;
		for(int i=str.length()-1;i>=0;i--)
		{
			str1+=str[i];
		}
		return str1;
    }
};
int main()
{

		Solution test;
	cout << test.convertToTitle(1);

}
