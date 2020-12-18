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
		int size;
		int count_chet = 0;
		int count_nechet = 0;
		char buf[256];
		fs.getline(buf, 256);
		size = atoi(buf);
		int* arr = new int[size];
		fstream wfs("output.txt", std::ofstream::out | std::ofstream::trunc);
		for (int i = 0; i < size; i++)
		{
			fs.getline(buf, 256, ' ');
			arr[i] = atoi(buf);
		}
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 != 0)
			{
				count_nechet++;
				wfs << arr[i] << " ";
			}
		}
		wfs << "\n";
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 == 0)
			{
				count_chet++;
				wfs << arr[i] << " ";
			}
		}
		wfs << "\n";
		if (count_chet >= count_nechet)
		{
			wfs << "YES";
		}
		else
		{
			wfs << "NO";
		}
	}

}