#include <iostream>
#include <assert.h>
using namespace std;
void print_triangle(int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << '*';
		}
		cout << endl;
	}
	print_triangle(n - 1);
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
