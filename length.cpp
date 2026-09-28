#include<stdio.h>
 int quickSort(int arr[],int start,int end)
 { 
 int pivot_index=(start+end)/2;
 int temp = arr[end];
 arr[end]=arr[pivot_index];
 arr[pivot_index]=temp;
 pivot_index=end;
 int pivot = arr[pivot_index];
 int k=start-1;
 int i;
 for(int start;i<=end;i++){
 	if(arr[i]<pivot){
 		k++;
 		int temp=arr[i];
 		arr[i]=arr[k];
 		arr[k]=temp;
 	
	 }
 }
 temp=arr[pivot_index];
 arr[pivot_index]=arr[k+1];
 arr[k+1]=temp;
 return k+1;
 }
 void partition (int arr[ ],int start,int end){
 	if(start<end){
 		int p=quickSort(arr,start,end);
 		partition(arr,start,p-1);
 		partition(arr,p+1,end);
 		
	 }
 }
 
 
 int main()
 {
 	int n;
 	printf("size of an array:");
 	scanf("%d",&n);
 	int i=0;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		scanf("%d",&arr[i]);
	 }
	 partition(arr,0,n-1);
	 for( int i=0;i<n;i++){
	 	printf("%d ",arr[i]);
	 }
 }