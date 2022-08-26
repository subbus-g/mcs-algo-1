#include <iostream>
#include <assert.h>
using namespace std;
void print_3nplus1(int n)
{
	while (n != 1)
	{

		cout << n << " ";
		if (n % 2)
		{
			n = 3 * n + 1;
		}
		else
		{
			n = n / 2;
		}
	}
	cout << 1;
}
int main()
{
	// comment these 2 lines for console I/O rather than file I/O
	freopen("..\\00-in.txt", "r", stdin);
	freopen("..\\00-out.txt", "w", stdout);

	int n;
	cin >> n;
	print_3nplus1(n);

	return 0;
}
