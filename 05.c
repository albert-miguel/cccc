#include <stdio.h>

int main(void) {
   enum estadoReg {
      Ganha, Perde
   };

   enum estadoReg estadoAtual;
   int dado = 4;

   if(dado == 6) {
      estadoAtual = Ganha;
   } else {
      estadoAtual = Perde;
   }

   if(estadoAtual == Ganha) {
      printf("You win the game");
   } else {
      printf("You lose the game");
   }

   return 0;
}