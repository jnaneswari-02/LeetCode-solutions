#include<stdio.h>
#include<math.h>
int main(){
	int N;
	int count=0;
	scanf("%d",&N );
	if(N<=1){
		printf("Not prime");
		return 0;
	}
	for(int i=1;i<=sqrt(N);i++){
	 if(N%i==0){
	   if(i !=N/i){
	  	count+=2;
	 }else{
	 	count++;
	 }
}
}
	 if(count==2){
	 printf("is prime");
}else {
	printf("Not prime");
}

 return 0;	
  
	}