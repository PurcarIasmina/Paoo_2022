#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{   int i,j,N;
    cout<<"N=";
    cin>>N;
    cout<<endl;
	int arr[N];
    for(i=0;i<N;i++){
        cout<<"arr["<<i<<"]"<<"=";
        cin>>arr[i];
        cout<<endl;}
	insertionSort(arr, N);
	for(i=0;i<N;i++)
        cout<<arr[i]<<" ";

	return 0;
}


