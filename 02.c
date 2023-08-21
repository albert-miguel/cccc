#include <stdio.h>

int main(void) {

   int decimal = 15;

   int hexadecimal = 0xb;

   int octal = 013;

   printf("Hexadecimal do decimal = %x\n", decimal);
   printf("Octal do decimal = %o\n", decimal);
   printf("O decimal = %d\n", decimal);

   printf("Hexadecimal do octal = %x\n", octal);
   printf("Decimal do octal = %d\n", octal);
   printf("O octal = %o\n", octal);

   printf("Decimal do hexadecimal = %d\n", hexadecimal);
   printf("Octal do hexadecimal = %o\n", hexadecimal);
   printf("O hexadecimal = %x\n", hexadecimal);

}