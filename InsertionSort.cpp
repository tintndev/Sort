#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int A[], int soPhanTu)
{
	for (int i = 1; i < soPhanTu; i++)
	{
		int KEY = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > KEY)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = KEY;
	}
}

int main()
{
	// Input:
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
	freopen("InsertionSort.inp", "r", stdin);
	int soPhanTu; cin >> soPhanTu;
	int *A = new int[soPhanTu]; for (int i = 0; i < soPhanTu; i++) cin >> A[i];

	// Output:
	InsertionSort(A, soPhanTu);
	freopen("InsertionSort.out", "w", stdout);
	for (int i = 0; i < soPhanTu; i++) cout << A[i] << " ";

	return 0;
}
