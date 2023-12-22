#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    char rev[30];

    printf("Enter string: ");
    scanf("%s", str);

    strcpy(rev, str);  // Copy the original string to rev
    strrev(rev);       // Reverse the copied string

    if (strcmp(str, rev) == 0) {  // Compare original and reversed
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
