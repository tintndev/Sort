#include <bits/stdc++.h>
using namespace std;

void Heapify(int A[], int soPhanTu, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < soPhanTu && A[left] > A[largest]) largest = left;
	if (right < soPhanTu && A[right] > A[largest]) largest = right;
	if (largest != i)
	{
		swap(A[i], A[largest]);
		Heapify(A, soPhanTu, largest);
	}
}

void HeapSort(int A[], int soPhanTu)
{
	for (int i = soPhanTu / 2 - 1; i >= 0; i--) Heapify(A, soPhanTu, i);
	for (int i = soPhanTu - 1; i > 0; i--)
	{
		swap(A[0], A[i]);
		Heapify(A, i, 0);
	}
}

int main()
{
	// Input:
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
	freopen("HeapSort.inp", "r", stdin);
	int soPhanTu; cin >> soPhanTu;
	int *A = new int[soPhanTu]; for (int i = 0; i < soPhanTu; i++) cin >> A[i];

	// Output:
	HeapSort(A, soPhanTu);
	freopen("HeapSort.out", "w", stdout);
	for (int i = 0; i < soPhanTu; i++) cout << A[i] << " ";

	return 0;
}
