#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (int a = 1; a <= 8; a++)
	{
		for (int b = 1; b <= 9; b++)
		{
			cout << setw(4) << a * b;
		}
		cout << '\n';
	}
}