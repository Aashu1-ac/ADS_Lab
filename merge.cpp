#include <iostream>
#include <stack>
using namespace std;

struct Range {
    int left;
    int right;
};

void merge(int arr[], int left, int mid, int right) {
    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (int x = left; x <= right; x++)
        arr[x] = temp[x];
}

void mergeSort(int arr[], int n) {
    stack<Range> s;

    s.push({0, n - 1});

    while (!s.empty()) {
        Range current = s.top();
        s.pop();

        int left = current.left;
        int right = current.right;

        if (left >= right)
            continue;

        int mid = (left + right) / 2;

        // Push ranges onto stack
        s.push({mid + 1, right});
        s.push({left, mid});

        // Merge after both halves are processed
        // This simple stack approach needs a second state.
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;

    mergeSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}