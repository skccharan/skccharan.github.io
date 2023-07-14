#include <iostream>

using namespace std;


int top(int arr[])
void insert(int arr[],int x, int n){
	int top = 0;
	for(int i=0; i<n; i++) {
		if(arr[i] == 0){
			top = i; break;
		}
		top = n;
	}

	if(top > n-1){
		cout<<"Cant Insert, Array is full\n";
		return;
	} 
	else{
		arr[top] = x;
		top++;
		cout<<"Element inserted\n";
	}
}

bool del(int arr[], int idx){
	for (int i = 0; i < count; ++i)
	{	}
} 

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 4, 10 ,0 , 0};
	int size = 6;
	
	insert(arr, 8, size);
	insert(arr, 10, size);
	insert(arr, 112, size);
	insert(arr, 112, size);

	cout<<"\n";
	for (int i : arr ) cout<<i<<" ";
	return 0;
}

