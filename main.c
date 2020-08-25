/*
 * ただ指定数のランダム文字列を生成するだけ 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* getPass(char* pass, int length, char* chars, int charlen);

int main(int argc, char *argv[]){
    // 有効文字列設定
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

    // パスワードの長さを設定
    int length = 20;
    if(argc == 2) length = atoi(argv[1]);

    // 生成タイム
    char pass[length + 1];
    getPass(pass, length, chars, sizeof chars);
    printf("%s", pass);

    return 0;
}

// パスワードを生成する
char* getPass(char* pass, int length, char* chars, int charlen){
    srand(time(NULL));
    for(int i = 0; i < length; i++){
        pass[i] = chars[rand() % charlen];
    }
    pass[length] = '\0';
    return pass;
}