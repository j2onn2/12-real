#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main (int argc, char *argv []){
	char src[] = "Thr worst things to eat before you sleep"	;
	char dst[100]	;
	
	char str[30] = "happy C programming"	;
	
	strcpy(dst, src)	;
	
	printf("copied string : %s\n", dst)	;
	
	
	pirntf("문자열\"%s\"의 길이 : %i\n", str, strlen(str))	;
	
	return 0	;
}


