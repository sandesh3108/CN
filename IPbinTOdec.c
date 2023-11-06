#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

int main(void) {
    char binaryIP[16];
    printf("Enter an IP address in binary: ");
    scanf("%s", binaryIP);

    // Split the binary IP into four 8-bit binary numbers
    char binaryOctets[4][9];
    int i = 0, j = 0;
    while (binaryIP[i] != '\0') {
        binaryOctets[j][i%8] = binaryIP[i];
        if ((i+1)%8 == 0) {
            binaryOctets[j][8] = '\0';
            ++j;
        }
        ++i;
    }

    // Convert each 8-bit binary number into a decimal number
    int decimalOctets[4];
    for (i = 0; i < 4; ++i) {
        decimalOctets[i] = binaryToDecimal(atoi(binaryOctets[i]));
    }

    // Display the decimal IP address
    printf("The decimal IP address is: %d.%d.%d.%d\n", decimalOctets[0], decimalOctets[1], decimalOctets[2], decimalOctets[3]);

    return 0;
}

