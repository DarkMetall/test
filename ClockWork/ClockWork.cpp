#include <iostream>

using namespace std;

int main()
{
	int result = 0;
	int g = 0;
	for (float hours = 0; hours <12; hours++)
	{
		for (int minutes = 0; minutes < 60; minutes++)
		{
			g++;
			for (float seconds = 0; seconds <60; seconds +=0.1 )
			{
				if (((abs(round(hours * 30 - seconds * 6)) == 69) || (abs(round(seconds * 6 - hours * 30)) == 69))|| ((abs(round(hours * 30 - seconds * 6)) == 291) || (abs(round(seconds * 6 - hours * 30)) == 291)))
				{
					cout << hours << " hour, " << minutes << " minutes, " << seconds << " seconds" << endl;
					result++;
				}
			}
		}

	}
	cout << result * 2 << endl;
}

