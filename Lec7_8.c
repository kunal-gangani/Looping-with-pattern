#include<stdio.h>
main(){
	int i,j,n=1;
	char alpha='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j%2==0){
				printf("%c ",alpha++);
			}else{
				printf("%d ",n);
				n++;
			}
		}
		printf("\n");
	}
}
