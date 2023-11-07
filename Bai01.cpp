#include <iostream>
using namespace std;
#define MAX 10
void NhapMang(int a[], int& n)
{
	cout << "Nhap so phan tu "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
bool KiemTraNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
}
int KiemTraHaiSoNguyenToLienTiep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((KiemTraNguyenTo(a[i]) == true) && (KiemTraNguyenTo(a[j])==true))
			{
				if (a[i] == a[j - 1])
				{
					cout << "co 2 so nguyen to lien tiep"; return 0;
				}
			}
		}
	}
	cout << "Khong co";
}
int main()
{
	int a[MAX];
	int n = 0;
	NhapMang(a, n);
	cout << endl;
	XuatMang(a, n);
	cout << endl;
	KiemTraHaiSoNguyenToLienTiep(a, n);
	return 0;
}