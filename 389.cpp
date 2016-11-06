#include<iostream>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
    	int i=0;
    	int a[26]={0};
        for(i=0;i<s.length();i++)
        {
        	a[s[i]-'a']++;
		}
		for(i=0;i<t.length();i++)
		{
			a[t[i]-'a']--;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]!=0)
			{
				return 'a'+i;
			}
		}
	return 0;
    }
};
int main()
{
	Solution test;
	cout << test.findTheDifference("abdc","abdce");
}
