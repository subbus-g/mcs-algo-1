#include <iostream>
#include <assert.h>
using namespace std;
void print_triangle(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	// comment these 2 lines for console I/O rather than file I/O
	freopen("..\\00-in.txt", "r", stdin);
	freopen("..\\00-out.txt", "w", stdout);

	int n;
	cin >> n;
	print_triangle(n);

	return 0;
}
