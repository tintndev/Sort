#include <bits/stdc++.h>
using namespace std;

void Merge(int A[], int left, int right, int middle)
{
	vector <int> x(A + left, A + middle + 1);
	vector <int> y(A + middle + 1, A + right + 1);
	int i = 0;
	int j = 0;
	while (i < x.size() && j < y.size())
	{
		if (x[i] <= y[j])
		{
			A[left] = x[i];
			++left;
			++i;
		}
		else
		{
			A[left] = y[j];
			++left;
			++j;
		}
	}
	while (i < x.size())
	{
		A[left] = x[i];
		++left;
		++i;
	}
	while (j < y.size())
	{
		A[left] = y[j];
		++left;
		++j;
	}
}

void MergeSort(int A[], int left, int right)
{
	if (left >= right) return;
	int middle = (left + right) / 2;
	MergeSort(A, left, middle);
	MergeSort(A, middle + 1, right);
	Merge(A, left, right, middle);
}

int main()
{
	// Input:
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
	freopen("MergeSort.inp", "r", stdin);
	int soPhanTu; cin >> soPhanTu;
	int *A = new int[soPhanTu]; for (int i = 0; i < soPhanTu; i++) cin >> A[i];

	// Output:
	MergeSort(A, 0, soPhanTu - 1);
	freopen("MergeSort.out", "w", stdout);
	for (int i = 0; i < soPhanTu; i++) cout << A[i] << " ";

	return 0;
}
