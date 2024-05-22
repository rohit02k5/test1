#include <stdio.h>
#include <string.h>

int Sub(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len1 - len2; ++i) {
        int j;
        for (j = 0; j < len2; ++j) {

            char char1 = s1[i + j];
            char char2 = s2[j];
            if (char1 >= 'A' && char1 <= 'Z') {
                char1 += ('a' - 'A');
            }
            if (char2 >= 'A' && char2 <= 'Z') {
                char2 += ('a' - 'A');
            }
            if (char1 != char2) {
                break;
            }
        }
        if (j == len2) {
            return i; 
        }
    }

    return -1; 
}

int main() {
    char s1[100];
scanf("%s",s1);
char s2[100];
scanf("%s",s2);
    
    int t = Sub(s1, s2);

    if (t != -1) {
        printf("%d",t);
    } else {
        printf("Not a substring");
    }

    return 0;
}
