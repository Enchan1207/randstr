/*
 * ただ指定数のランダム文字列を生成するだけ 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    int length = 10;
    char ch = ' ';
    char chars[] = {
        'a','b','c','d','e','f','g','h',
        'i','j','k','l','m','n','o','p',
        'q','r','s','t','u','v','w','x',
        'y','z','0','1','2','3','4','5',
        '6','7','8','9','A','B','C','D',
        'E','F','G','H','I','J','K','L',
        'M','N','O','P','Q','R','S','T',
        'U','V','W','X','Y','Z'
    };
    if(argc == 2) length = atoi(argv[1]);
    srand(time(NULL));

    for(int i = 0; i < length; i++){
        ch = chars[rand() % 63];
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}
