#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cout << "Nhap phan tu n "; cin >> n;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += pow(i,2);
	}
	cout << "Tong can tinh "<<s;

	return 0;
}