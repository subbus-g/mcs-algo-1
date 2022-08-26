#include <iostream>
#include <assert.h>
using namespace std;
void print_3nplus1(int n)
{
	cout << n << ' ';
	if (n == 1)
	{
		return;
	}
	if (n % 2)
	{
		print_3nplus1(3 * n + 1);
	}
	else
	{
		print_3nplus1(n / 2);
	}

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
