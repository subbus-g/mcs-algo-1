#include <iostream>
#include <assert.h>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
istream &operator>>(istream &in, vector<T> &v)
{

	T x;
	// char sentinel; // for '['
	// in >> sentinel;
	while (in >> x)
	{
		if (in.peek() == ',') // check if the next character is a comma and ignore it
			in.ignore();
		v.push_back(x);
	}
	return in;
}
// for cout<<vector
template <typename T>
ostream &operator<<(ostream &out, const vector<T> &v)
{
	out << "[";
	for_each(begin(v), end(v) - 1, [&](const auto &element)
			 { out << element << ","; });
	out << v.back() << "]" << endl;
	return out;
}
void insertion_sort(int n, vector<int> &v)
{

	for (int i = 1; i < n; i++)
	{
		// for (int j = 0; j <= i; j++)
		// {
		// 	if (v[j] > v[j + 1])ā
		// 	{
		// 		swap(v[j], v[j + 1]);
		// 	}
		// }
		int key = v[i];
		int j;
		// do right shift and create a hole
		for (j = i - 1; key < v[j] && j >= 0; j--)
		{

			v[j + 1] = v[j];
		}
		v[j + 1] = key;
	}
}
int main()
{
	// comment these 2 lines for console I/O rather than file I/O
	freopen("..\\00-in.txt", "r", stdin);
	freopen("..\\00-out.txt", "w", stdout);

	int n;
	cin >> n;
	vector<int> v;
	cin >> v;
	cout << "Before sorting: " << v;
	insertion_sort(n, v);
	cout << "After sorting:  " << v;
	return 0;
}
