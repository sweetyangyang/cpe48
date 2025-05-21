#include<iostream>
#include<algorithm>

using namespace std;
#define p pair <int ,int >

bool cmp(p a,p b)
{
	if(a.first!=b.first)
	{
	return a.first < b.first;
	}
	else
	{
	return a.second > b.second;
	}
}
bool flag = false;//把換行變成在開頭這樣可以吧最後的時後不會有換行

int main()
{
	
	string s;
	while(getline(cin,s))
	{
		if(flag == false)
		{
			flag = true;
		}
		else
		{
			cout << endl;
		}
		p a[256];
		for(int i=0;i<256 ;i++)
		{
			a[i] = {0,i};
		}
		for(int i=0;i<s.size();i++)
		{
			a[s[i]].first++;
		}
		sort(a,a+256,cmp);
		for(int i=0;i<256;i++)
		{
			if(a[i].first!=0)
			{
				cout << a[i].second << " " << a[i].first << endl;
			}
		}
		
	}
	return 0;
}