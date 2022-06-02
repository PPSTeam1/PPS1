#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <='Z'){
        printf("%c is in Uppercase \n",ch);
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("%c is in Lowercase\n",ch);
    }
    else{
        printf("%c is not a Letter");
    }

    return 0;
}
