#include<iostream>
using namespace std;
int main()
{
	string sort = "";
	cin >> sort;
	for (int i = 0; i < sort.length() - 1; i++)
	{
		for (int j = i + 1; j < sort.length(); j++)
		{
			if (sort[i] > sort[j])
			{
				char tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;
			}
		}
	}
	cout << sort;
}