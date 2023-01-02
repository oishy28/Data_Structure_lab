
#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;


    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[],int n)
{
    int start_index = (n/2)+1;

    for(int i=start_index; i>=0; i--)
    {
        heapify(arr,n,i);
    }
}


void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >=0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >=0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);


        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    for (int i=n-1; i >=0; --i)
        cout << arr[i] << " ";
    cout << "\n";
}

void printMaxHeap(int arr[], int n)
{
    cout <<" Max Heap is: ";

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}


int main()
{
    int *arr;
    int n=-1;
    cout<<"Input : ";
    for(int i=0;;i++)
    {
        cin>>arr[i];
        n++;
        if(arr[i]==-1)
        {
            break;
        }
    }

    heapSort(arr, n);
    cout << "Sorted array is:";
    printArray(arr, n);

    buildMaxHeap(arr,n);
    printMaxHeap(arr,n);


}
