#include <stdio.h>
#include <string.h>

void ReverseString(char *str) ;

int main() {
    char input[100];

    fgets(input, sizeof(input), stdin); 
    input[strcspn(input, "\n")] = '\0'; 

    ReverseString(input);

    printf("%s\n", input);

    return 0;
}

void ReverseString(char *str) {
    char *start = str; 
    char *end = str + strlen(str) - 1; 
    char temp;

    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
