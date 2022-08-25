#include <iostream>
#include <assert.h>
using namespace std;
int factorial(int n)
{
	cout << "------function call with n =  " << n << endl;
	if (n == 1)
	{
		return 1;
	}
	else
	{

		return n * factorial(n - 1);
	}
}
int main()
{
	// comment these 2 lines for console I/O rather than file I/O
	freopen("..\\00-in.txt", "r", stdin);
	freopen("..\\00-out.txt", "w", stdout);

	int n;
	cin >> n;
	cout << factorial(6) << endl;

	return 0;
}
