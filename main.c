#include <stdio.h>

//This function prints a binary equivalent of a given positive integer
int main(){

    //Reserving a 64 slot array
    int binary[64];
    int number;
    int quotient;
    int aux;

    printf("Decimal to binary base converter.\n");
    printf("Enter a positive number in decimal base: ");
    scanf("%d", &number);
    printf(" \n");

    //Keeping the input intact for printing
    quotient = number;

    //This for loop fills our array with the remainders. It ends up storing the binary number inverted
    for (aux = 0; quotient > 0; aux ++) {

        binary[aux] = quotient % 2;
        quotient = quotient / 2;
    }

    printf("%d in binary: ", number);

    //This for loop prints each element of the array to show the binary number correctly
    //aux = (aux - 1) because aux is incremented after the last iteration on the last 'for'
    for (aux = (aux - 1); aux >= 0; aux --) {

        printf("%d", binary[aux]);
    }

    printf(" \n");

    return 0;
}  