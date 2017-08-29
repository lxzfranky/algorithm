#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void calNext(char *str, int *next, int len){
	next[0]=-1;
	for(int i=1;i<len;i++){
		int j=next[i-1];
		while(str[i-1]!=str[j] &&j >=0){
			j=next[j];//递推计算
		}
		if(str[i-1]==str[j]){
			next[i]=j+1;
		}else{
			next[i]=0;
		}
	}
}
int KMP(char *str, int slen, char *ptr, int plen, int *next){
	int s_i = 0,p_i = 0;
	while(s_i < slen && p_i < plen){
		if( str[s_i] == ptr[p_i] ){
			s_i++;
			p_i++;
		}else{
			if(p_i == 0){
				s_i++;
			}else{
				p_i = next[p_i-1]+1;
			}
		}
	}
	return (p_i==plen) ? (s_i-plen) : -1;
}
int main(){
	char str[N] = {0};
	char ptr[N] = {0};
	int slen, plen;
	int next[N];

	scanf("%s%s", str, ptr);
	slen = strlen(str);
	plen = strlen(ptr);
	
	calNext(ptr, next, plen);
	for (int i = 0; i < plen; ++i){
		printf("%d\t", next[i]);
	}
	printf("\n");
	printf("%d\n", KMP(str,slen,ptr,plen,next));
	return 0;
}