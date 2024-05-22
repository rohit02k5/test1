#include <stdio.h>
#include <string.h>


int possiblePal(char str[]) {
    int charCount[26] = {0}; 

    
    for (int i = 0; str[i] != '\0'; i++) {
        charCount[str[i] - 'a']++;
    }

    int oddCount = 0;

    
    for (int i = 0; i < 26; i++) {
        if (charCount[i] % 2 != 0) {
            oddCount++;
        }

        
        if (oddCount > 1) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str[100];

    
    
    scanf("%s", str);

    
    if (possiblePal(str)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
