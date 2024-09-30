#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double S = 0, S1 = 0;
	int k = 1, i = 1;

	while (k <= 20)
	{
		S1 = 0;
		i = 1;
		while (i <= k)
		{
			S1 += cos(i + k);
			i++;
		}
		S += sqrt(pow(sin(k), 2) + fabs(S1));
		k++;
	}

	cout << "1) S = " << S << endl;

	S = 0;
	k = 1;

	do {
		S1 = 0;
		i = 1;
		do {
			S1 += cos(i + k);
			i++;
		} while (i <= k);
		S += sqrt(pow(sin(k), 2) + fabs(S1));
		k++;
	} while (k <= 20);
	


	cout << "2) S = " << S << endl;
	
	S = 0;

	for (k = 1; k <= 20; k++)
	{
		S1 = 0;
		for (i = 1; i <= k; i++)
		{
			S1 += cos(i + k);
		}
		S += sqrt(pow(sin(k), 2) + fabs(S1));
	}

	cout << "3) S = " << S << endl;
	
	S = 0;

	for (k = 20; k >= 1; k--)
	{
		S1 = 0;
		for (i = k; i >= 1; i--)
		{
			S1 += cos(i + k);
		}
		S += sqrt(pow(sin(k), 2) + fabs(S1));
	}

	cout << "4) S = " << S << endl;

	return 0;
}

