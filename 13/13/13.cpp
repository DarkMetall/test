
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	fstream fs("input.txt");
	string s;
	if (fs.is_open())
	{
		int S;
		int N;
		char buf[256];
		fs.getline(buf, 256, ' ');
		N = atoi(buf);
		fs.getline(buf, 256, ' ');
		S = atoi(buf);
		vector<int> cars;
		for (int i = 0; i < N; i++)
		{
			fs.getline(buf, 256, ' ');
			cars.push_back(atoi(buf));

		}
		sort(cars.begin(), cars.end());
		int answer = 0;
		int sum = 0;
		vector<int>::iterator it = cars.begin();
		for (int i = 0; i < N; i++)
		{
			sum += *it;
			if (sum > S)
			{
				sum -= *it;
				break;
			}
			else
			{
				answer++;
				it++;
			}
		}
		cout << answer;
		fstream wfs("output.txt", std::ofstream::out | std::ofstream::trunc);
		wfs << answer;
	}

}