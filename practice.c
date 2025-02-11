#include <stdio.h>
#include <stdlib.h>

void binaryToHex(char *binary)
{
    char *endptr;
    long int decimal = strtol(binary, &endptr, 2);
    if (*endptr != '\0') {
        printf("Invalid binary number.\n");
        return;
    }
    printf("Hexadecimal: %lX\n", decimal);
}

int main()
{
    char binary[65];
    printf("Enter a binary number: ");
    scanf("%64s", binary);
    binaryToHex(binary);
    return 0;
}
