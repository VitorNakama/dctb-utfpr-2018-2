/* Exemplo de uso da funcao getch e getche.
   A fun��o getch le uma tecla e n�o imprimi o que foi digitado.
   A fun��o getche le uma tecla e IMPRIMI o que foi digitado.  */

#include<stdio.h>
//#include<curses.h>
// curses.h - Linux
// sudo apt-get install libncurses5-dev libncursesw5-dev
// conio.h - Windows

char letra; int codigo;

int main(){
  printf("Digite uma tecla: ");
  scanf(" %c",&letra); // ou scanf("%c",&letra);
  printf("\nA Letra digitada foi [%c] e o codigo desta letra eh [%d]",letra,letra);
  printf("\n\nEntre com o codigo inteiro do simbolo: ");
  scanf("%d",&codigo);
  printf("O codigo corresponde ao caracter [%c]\n",codigo);
  return 0;
}
