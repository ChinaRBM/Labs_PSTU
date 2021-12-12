#include <iostream>
using namespace std;
int main()
{
	float n, max;
	float lm = 0;
	float fm = 0;
	cin >> n;
	max = -1;
	for (float i = 1; i <= n; i++)
	{

		if ((round(sin(n + (i / n)) * 10) / 10) > max)
		{
			max = (round(sin(n + (i / n)) * 10) / 10);
			fm = i;
		}
		if ((round(sin(n + (i / n)) * 10) / 10) == max)
		{
			lm = i;
		}
	}
	cout << "Max: " << max << endl;
	cout << "№ First Max: " << fm << endl << "Last: " << lm;
}