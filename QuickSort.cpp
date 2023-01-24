#include <bits/stdc++.h>
using namespace std;

int Pivot(int A[], int low, int high)
{
	int middle = (low + high) / 2;
	if (A[middle] < A[low]) swap(A[low], A[middle]);
	if (A[high] < A[low]) swap(A[low], A[high]);
	if (A[middle] < A[high]) swap(A[middle], A[high]);
	return A[high];
}

int Partition(int A[], int low, int high)
{
	int left = low;
	int right = high - 1;
	int pivot = Pivot(A, low, high);
	while (true)
	{
		while (left <= right && A[left] < pivot) left++;
		while (right >= left && A[right] > pivot) right--;
		if (left >= right) break;
		swap(A[left], A[right]);
		left++;
		right--;
	}
	swap(A[left], A[high]);
	return left;
}

void QuickSort(int A[], int low, int high)
{
	if (low < high)
	{
		int index = Partition(A, low, high);
		QuickSort(A, low, index - 1);
		QuickSort(A, index + 1, high);
	}
}

int main()
{
	// Input:
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
	freopen("QuickSort.inp", "r", stdin);
	int soPhanTu; cin >> soPhanTu;
	int *A = new int[soPhanTu]; for (int i = 0; i < soPhanTu; i++) cin >> A[i];

	// Output:
	QuickSort(A, 0, soPhanTu - 1);
	freopen("QuickSort.out", "w", stdout);
	for (int i = 0; i < soPhanTu; i++) cout << A[i] << " ";

	return 0;
}
