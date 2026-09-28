
 #include<stdio.h>
 int QuickSort(int arr[],int start,int end)
 {
  int pivot_index=start;
 int temp = arr[end];
 arr[end]=arr[pivot_index];
 arr[pivot_index]=temp;
 pivot_index=end;
 int pivot = arr[pivot_index];
 int k=start-1;
 int i;
 for(i=start;i<=end;i++){
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
 void Partition(int arr[ ],int start,int end){
 	if(start<end){
 		int p=QuickSort(arr,start,end);
 		Partition(arr,start,p-1);
 		Partition(arr,p+1,end);
 		
	 }
 }
 
 
 int main(){
 	int n;
 	printf("size of an array:");
 	scanf("%d",&n);
 	int arr[n];
 	int i=0;
 	printf("elements of an array:");
 	for(i=0;i<n;i++){
 		scanf("%d",&arr[i]);
	 }
	 Partition(arr,0,n-1);
	 for(i=0;i<n;i++){
	 	printf("%d ",arr[i]);
	 }
 }
