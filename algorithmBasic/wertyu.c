#include "stdio.h"

int main(){
	char c;
	char *s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	int len = count(s);
	while((c=getchar())!=EOF){
		for(int i=1; i < len; i++){
			if(c == s[i]){
				c = s[i-1];
				break;
			}
		}
		putchar(c);
	}
	printf("\n");
}