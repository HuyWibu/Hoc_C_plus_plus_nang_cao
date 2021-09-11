#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> list;
	int n;
	cin >> n;
	int index = 0;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> index;
		list.push_back(index);
	}
	for(vector<int> :: iterator it = list.begin() ; it != list.end() ; it++)
	{
		cout << *it << " ";
	}
}
