#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

        if (ch >= 'a' && ch <= 'z' ){
            printf("Lower Case");
        }else if (ch >= 'A' && ch <= 'Z'){
            printf ("Upper Case");
        }else{
            printf("Not English Letter\n");
        }

    return 0;
}

