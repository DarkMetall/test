
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PizzaSlice(int slice, int& answer)
{
	if (slice == 0)
	{
		answer += 1;
	}
	if (slice == 1)
	{
		answer += 2;
	}
	if (slice == 2)
	{
		answer += 4;
	}
	if (slice > 2)
	{
		answer += slice;
		PizzaSlice(slice - 1, answer);
	}
}

int main()
{
	fstream fs("input.txt");
	string s;
	if (fs.is_open())
	{
		char buf[4];
		fs.getline(buf, 256);
		int slice = atoi(buf);
		int answer = 0;
		PizzaSlice(152, answer);
		cout << answer;
		fstream wfs("output.txt", std::ofstream::out | std::ofstream::trunc);
		wfs << answer;
	}

}

