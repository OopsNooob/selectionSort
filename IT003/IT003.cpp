#include <iostream>
#include <vector>
using namespace std;

void printf(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << endl;
}

void selectionSort(vector<int>& a)
{
	int i, j, min_idx;

	for (int i = 0; i < a.size() - 1; i++)
	{
		min_idx = i;

		for (int j = i + 1; j < a.size(); j++)
		{
			if (a[j] < a[min_idx])
			{
				min_idx = j;
			}
		}
		if (min_idx != i)
		{
			swap(a[i], a[min_idx]);
		}
	}
}
int main()
{
	vector <int> a = { 5, 6, 7, 1, 0, 2, 9, 10, 8, 3 };

	printf(a);

	selectionSort(a);

	printf(a);
}