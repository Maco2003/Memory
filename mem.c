/*
 * mem.c
 *
 *  Created on: Apr 24, 2023
 *      Author: Maco
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void HexToBin(char* hexdec);


int main()
{
	FILE *fp;
	fp = fopen("C:/Users/Maco/eclipse-workspace/Memory", "r");
	char * hexidecimal = (char *)malloc((10 + 1) * sizeof(char));
	fgets(hexidecimal, 10, fp);
	printf("%s", &hexidecimal);
	return 0;
}

void HexToBin(char* hexdec)
{

    long int i = 0;
    char * bin = (char *)malloc((4 + 1) * sizeof(char));
    char * binary = (char *)malloc((32 + 1) * sizeof(char));

    while (hexdec[i]) {

        switch (hexdec[i]) {
        case '0':
            printf("0000");
            bin = "0000";
            strcat(binary, bin);
            break;
        case '1':
            printf("0001");
            bin = "0001";
            strcat(binary, bin);
            break;
        case '2':
            printf("0010");
            bin = "0010";
            strcat(binary, bin);
            break;
        case '3':
            printf("0011");
            bin = "0011";
            strcat(binary, bin);
            break;
        case '4':
            printf("0100");
            bin = "0100";
            strcat(binary, bin);
            break;
        case '5':
            printf("0101");
            bin = "0101";
            strcat(binary, bin);
            break;
        case '6':
            printf("0110");
            bin = "0110";
            strcat(binary, bin);
            break;
        case '7':
            printf("0111");
            bin = "0111";
            strcat(binary, bin);
            break;
        case '8':
            printf("1000");
            bin = "1000";
            strcat(binary, bin);
            break;
        case '9':
            printf("1001");
            bin = "1001";
            strcat(binary, bin);
            break;
        case 'A':
        case 'a':
            printf("1010");
            bin = "1010";
            strcat(binary, bin);
            break;
        case 'B':
        case 'b':
            printf("1011");
            bin = "1011";
            strcat(binary, bin);
            break;
        case 'C':
        case 'c':
            printf("1100");
            bin = "1100";
            strcat(binary, bin);
            break;
        case 'D':
        case 'd':
            printf("1101");
            bin = "1101";
            strcat(binary, bin);
            break;
        case 'E':
        case 'e':
            printf("1110");
            bin = "1110";
            strcat(binary, bin);
            break;
        case 'F':
        case 'f':
            printf("1111");
            bin = "1111";
            strcat(binary, bin);
            break;
        default:
            printf("\nInvalid hexadecimal digit %c", hexdec[i]);
        }
        i++;
    }
}
