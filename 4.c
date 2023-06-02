#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void changeRegister(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i]) && isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else if (isalpha(str[i]) && islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else {
            continue;
        }
    }
}

int main() {
    char str[100];
    fgets(str, 100, stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    changeRegister(str);
    printf("%s", str);
    return 0;
}