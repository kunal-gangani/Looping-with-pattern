#include <stdio.h>
main() {
    int i,j;
    char chr = 'A';
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            printf("%c ", chr);
            chr++;
        }
        printf("\n");
    }
	return 0;
}

