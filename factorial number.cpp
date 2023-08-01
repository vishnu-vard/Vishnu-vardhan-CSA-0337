#include<stdio.h>
int main(){
	int n,product=1;
	printf("N=");
	scanf("%d",&n);
	if(n==0){
		printf("%d factorial=%d",n,1);
	}
	else if(n>0){
		for(int i=1;i<=n;i++){
			product=product*i;
		}
		printf("%dfactorial=%d",n,product);
		
		}
		else if(n<0){
			n=-(n);
			for(int i=1;i<=n;i++){
				product=product*i;
			}
			printf("%d factorial=%d",n,-(product));
		}
	else{
		printf("invalid input");
	}	
}
