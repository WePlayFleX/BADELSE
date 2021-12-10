#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter numbers a, b and c: \n";
	cin >> a >> b >> c;

	if (a == b)
	{
		if (b == c)
		{
			cout << "a, b and c are equal\n";
		}
	}
	else
	{
		cout << "a, b and c not equal\n";
	}

	system("pause");
	return 0;
}