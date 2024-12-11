#include <stdio.h>
#include <string.h>

int main(){
	char string[]="Shihouin Yoruichi";
	int i=0;
	while(i<strlen(string)){
		printf("[%c] ",string[i]);
		i++;
	}
	return 0;
}
