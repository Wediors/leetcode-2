#include <iostream>
#include <vector>
#include<string>  
#include<stdlib.h>  
#include <sstream>
using namespace std;

class Solution{
	public:
		vector<string> fizzBuzz(int n){
			vector<string> result;
			for (int i=1;i<=n;i++)
			{
				if (i%15==0)
			{
				result.push_back("FizzBuzz");
			}
			else if(i%3==0)
			{
				result.push_back("Fizz");
			}
			else if(i%5==0)
			{
				result.push_back("Buzz");
			}
			else{
				char buf[10];
				sprintf(buf,"%d",i);
				string a=buf;

				result.push_back(a);
			}
			}
			return result;
		}
};

int main()
{
	Solution test ;
	vector<string> res = test.fizzBuzz(15);
	vector<string>::iterator it;
	for(it=res.begin();it!=res.end();it++)
	{
		cout<<*it<<endl;
	}
}
