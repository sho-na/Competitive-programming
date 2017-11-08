#include <cstdio>

int main(void){
	
	char c[4];
	char d[4];
	
	scanf("%s",c);
	scanf("%s",d);
	
	if(c[0]==d[2] && c[1]==d[1] && c[2]==d[0]){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
