#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, len;


    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);


    if (len < 2) {
        printf("The string does not match the pattern 'a*bb'.\n");
    } else {

        while (i < len && str[i] == 'a') {
            i++;
        }


        if (i < len && str[i] == 'b' && (i + 1 < len) && str[i + 1] == 'b' && (i + 2 == len)) {
            printf("The string matches the pattern 'a*bb'.\n");
        } else {
            printf("The string does not match the pattern 'a*bb'.\n");
        }
    }

    return 0;
}


// test cases : bbbb aaa baaabb aaabbb baaabb aaab abbabb abb aaaaabb