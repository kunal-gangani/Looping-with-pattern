#include<stdio.h>
main(){
	int row,col,i=1;
	for (row=2;row<=6;row++){
		for(col=2;col<=6;col++){
			printf("%d ",i);
			i++;
		}
		printf("\n");
	}
}
