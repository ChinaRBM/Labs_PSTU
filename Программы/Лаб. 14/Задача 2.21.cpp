#include <iostream>
using namespace std;
int main()
{
	int x, i;
	bool flag;
	cin >> x;
	i = x;
	while (x != 0)
	{
		cin >> x;
		if (i > x && x!=0)
		{
			flag = false;
			break;
		}
		else
		{
			flag = true;
			i = x;
			
		}
	}
	if (flag == true)
	{
		cout << "Ok";
	}
	else
	{
		cout << "Not okay";
	}
}