/*
WAP to convert a hexadecimal no. into binary no.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char hex[20];
    int i = 0, j = 0;
    char binary[80] = "";

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    while (hex[i] != '\0')
    {
        switch (hex[i])
        {
        case '0':
            strcat(binary, "0000");
            break;
        case '1':
            strcat(binary, "0001");
            break;
        case '2':
            strcat(binary, "0010");
            break;
        case '3':
            strcat(binary, "0011");
            break;
        case '4':
            strcat(binary, "0100");
            break;
        case '5':
            strcat(binary, "0101");
            break;
        case '6':
            strcat(binary, "0110");
            break;
        case '7':
            strcat(binary, "0111");
            break;
        case '8':
            strcat(binary, "1000");
            break;
        case '9':
            strcat(binary, "1001");
            break;
        case 'A':
        case 'a':
            strcat(binary, "1010");
            break;
        case 'B':
        case 'b':
            strcat(binary, "1011");
            break;
        case 'C':
        case 'c':
            strcat(binary, "1100");
            break;
        case 'D':
        case 'd':
            strcat(binary, "1101");
            break;
        case 'E':
        case 'e':
            strcat(binary, "1110");
            break;
        case 'F':
        case 'f':
            strcat(binary, "1111");
            break;
        }
        i++;
    }

    printf("Binary equivalent: %s\n", binary);
    return 0;
}