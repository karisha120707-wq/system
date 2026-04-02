#include <stdio.h>

void fortune_cookie (char msg []) 
{
   printf ("Сообщение гласит : %s\n", msg);
   printf("msg занимает %i байтов\n ", sizeof(msg));
   printf ("Строка qoute хранится по адресу: %p\n", quote);
}

int main () {
    char quote[] = "Печенье вас полнит";
    fortune_cookie(quote);
}


