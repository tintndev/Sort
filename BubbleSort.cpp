#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int A[], int soPhanTu)
{
	bool kiemTra;
	for (int i = 0; i < soPhanTu - 1; i++)
	{
		kiemTra = false;
		for (int j = 0; j < soPhanTu - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(A[j], A[j + 1]);
				kiemTra = true;
			}
		}
		if (kiemTra == false) break;
	}
}

int main()
{
	// Input:
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
	freopen("BubbleSort.inp", "r", stdin);
	int soPhanTu; cin >> soPhanTu;
	int* A = new int[soPhanTu]; for (int i = 0; i < soPhanTu; i++) cin >> A[i];

	// Output:
	BubbleSort(A, soPhanTu);
	freopen("BubbleSort.out", "w", stdout);
	for (int i = 0; i < soPhanTu; i++) cout << A[i] << " ";

	return 0;
}
