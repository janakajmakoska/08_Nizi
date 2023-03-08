#include <stdio.h>
#include <string.h>

int palindrom(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Vnesi niza: ");
    scanf("%s", str);
    if (palindrom(str)) {
        printf("Stringot e palindrom.\n");
    } else {
        printf("Stringot ne e palindrom.\n");
    }
    return 0;
}
