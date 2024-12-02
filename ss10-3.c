#include<stdio.h>

int main(){
	int arr[5] = {1,3,2,5,4};
	int size = sizeof(arr)/sizeof(int);
	printf("Mang truoc khi sap sep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	for(int i=0;i<size;i++){
		int key = arr[i];
		int j = i - 1;
		while(j>=0 && key<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	printf("\nMang sau khi sap sep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
