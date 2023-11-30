#include<stdio.h>
main(){
	char row,col;
	for(row='A';row<='E';row++){
		for(col='A';col<='E';col++){
			printf("%c ",row);
		}
		printf("\n");
	}
}
