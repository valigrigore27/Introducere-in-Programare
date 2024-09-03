#include <iostream>
using namespace std;
int main()
{
	int n, x, a[50][3] = { 0 }, i = 0;
	cin >> n;
	while (n)
	{
		cin >> x;
		if (x == 0) { a[i][0] = 1;a[i][1] = 0;i++; }
		else if (x == 1) { a[i][0] = 1;a[i][1] = 1;i++; }
		else { a[i][0] = 1;a[i][1] = 2;i++; }
		n--;
	}
	cout << endl;
	n = i - 1;
	for (i = 0;i <= n;i++)
		cout << a[i][0] << ' ' << a[i][1] << endl;
	return 0;
}