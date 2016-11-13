#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        int a[26]={0},b[26]={0};
        cout<<s.length()<<endl;
        for(int i=0;i<s.length();i++)
        {
        	if(s[i]>'Z')
        	{
        		a[s[i]-'a']++;
			}
			else{
				b[s[i]-'A']++;
			}
		}

		int temp=0,len=0;
		for(int i=0;i<26;i++)
		{
			if(a[i]%2==0)
			{
				len+=a[i];
			}
			else{
					temp=1;
				len+=a[i]-1;
			}
			if(b[i]%2==0)
			{
				len+=b[i];
			}
			else{
					temp=1;
				len+=b[i]-1;
			}
		}
		if(temp==1)
			len+=1;
		return len;
    }
};
int main()
{
	Solution test;
	cout << test.longestPalindrome("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth");
 } 
