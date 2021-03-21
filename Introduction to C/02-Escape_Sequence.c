#include<stdio.h>

int main()
{
  printf("\a Hey there!"); // --> stands for audible signal

  printf("Hey there! \b"); // --> stands for backspace

  printf("\t Hey there!"); // --> stands for tab

  printf("Hey there! \n"); // --> stands for newline

  printf("Hey there! \v"); // --> stands for vertical space

  printf("Hey there! \f"); // --> stands for new page

  printf("Hey there! \r"); // --> stands for carriage return

  /*
     \? --> Question mark
     \\ --> back slash
     \' --> single quote
     \" --> double quote
     \0 --> octal constant
     \x --> hexadecimal constant
*/

  return 0;
}
