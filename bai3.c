#include <stdio.h>

int main(){
	char text[]=" the world ";

	int lenght = strlen(text);
	for(int i=lenght; i>0; i--){
		printf("%c ",text[i]);
	}
	
	return 0;
}
