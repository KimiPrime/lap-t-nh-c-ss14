#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "skibidi toilet";
    char character;
    int count = 0;

    printf("Chuoi: %s\nNhap ky tu: ", string);
    scanf("%c", &character);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == character) count++;
    }

    printf("Ky tu '%c' xuat hien %d lan.\n", character, count);
    return 0;
}
