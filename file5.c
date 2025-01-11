
#include <stdio.h>

int len(char *p) {
    int count = 0;
    
    while (*p != '\0' && *p != '\n') { 
        count++;
        p++;
    }
    
    return count;
}

int main() {
    char string[10];
    printf("Enter any word: ");
    fgets(string, sizeof(string), stdin);

    
    

    int g = len(string);
    printf("The size of the given string is: %d\n", g);

    return 0;
}
