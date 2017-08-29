#include "stdio.h"
#include "string.h"
#define LEN 10

int main(int argc, char const *argv[])
{
	char str1[LEN];
	char str2[LEN];
	scanf("%s%s",str1,str2);

	int m = strlen(str1);
	int n = strlen(str2);

	int keys[m+1][n+1];
	//初始化
	//abcefmab acefab
	for(int i=0; i<= m; ++i){
		for(int j=0;j <= n ; ++j){
			keys[i][j] = 0;
		}
	}

	for (int i = 1; i <= m; ++i){
		for (int j = 1; j <= n; ++j){
			if(str1[i] == str2[j]){
				keys[i][j] = keys[i-1][j-1] + 1;
			}else{
				keys[i][j] = keys[i][j-1] > keys[i-1][j] ? keys[i][j-1] : keys[i-1][j];
			}
		}
	}

	for(int i=1; i<= m; ++i){
		for(int j=1;j <= n ; ++j){
			printf("%d\t",keys[i][j]);
		}
		printf("\n");
	}

	return 0;
}