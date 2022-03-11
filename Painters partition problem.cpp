
#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n)
{
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

int getSum(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total += arr[i];
	return total;
}

int numberOfPainters(int arr[], int n, int maxLen)
{
	int total = 0, numPainters = 1;

	for (int i = 0; i < n; i++) {
		total += arr[i];

		if (total > maxLen) {
			total = arr[i];
			numPainters++;
		}
	}

	return numPainters;
}

int partition(int arr[], int n, int k)
{
	int lo = getMax(arr, n);
	int hi = getSum(arr, n);

	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		int requiredPainters = numberOfPainters(arr, n, mid);

		if (requiredPainters <= k)
			hi = mid;

		else
			lo = mid + 1;
	}


	return lo;
}


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	cout << partition(arr, n, k) << endl;
	return 0;
}
