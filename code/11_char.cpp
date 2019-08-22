#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
		string str1, str2;
		cin >> str1 >> str2;
		set<char> set1;
		set<char> set2;
		int len = str1.size() > str2.size() ? str1.size() : str2.size();
		vector<char> vec(len);
		for (int i = 0; i < str1.size(); i++)
		{
			set1.insert(str1[i]);
		}
		for (int i = 0; i < str2.size(); i++)
		{
			set2.insert(str2[i]);
		}
		auto iter = set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), vec.begin());
		vec.resize(iter-vec.begin());
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i];
		}
}
