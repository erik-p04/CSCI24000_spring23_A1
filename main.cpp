#include <iostream>
#include <string>

int arraySize;

void SelectionSort(int arr[]){
	int as = arraySize;
	for(int i=0;i<as;i++){
		int small = i;
		for(int j=i+1;j<as;j++){
			if(arr[j] < arr[small]){
				small = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[small];
		arr[small] = temp;
	}
}

void ShowArray(int arr[]){
	for(int i=0;i<arraySize;i++){
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;
}

int main(){
	std::cout << "Enter array size:" << std::endl;
	std::cin >> arraySize;
	std::cout << "Fill up the array with integers:" << std::endl;
	int arr[arraySize];
	for (int i=0;i<arraySize;i++){
		std::cout << "Number " << i << ":" << std::endl;
		std::cin >> arr[i];
	}
	std::cout << "Original Array:" << std::endl;
	ShowArray(arr);
	std::cout << "Sorted using selection sort:" << std::endl;
	SelectionSort(arr);
	ShowArray(arr);
}
