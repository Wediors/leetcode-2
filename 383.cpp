#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    	int a[26]={0};
    	for(int i=0;i<magazine.length();i++)
    	{
    		a[magazine[i]-'a']++;
		}
		for(int i=0;i<ransomNote.length();i++)
		{
			a[ransomNote[i]-'a']--;
		}
		for(int i=0;i<26;i++)
		{
			if(a[i]<0)
			{
				return false;
			}
		}
		return true;
    }
};
int main()
{
	Solution test;
	cout << test.canConstruct( "fffbfga","effjfggbffjdgbjjhhdegh");
	
 } 


