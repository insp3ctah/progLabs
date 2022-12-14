#include <stdio.h>
#include <string.h>

int main() {
    {
        int N = 9;
        int l;
        char string2[N];
        scanf("%s", &string2);//запрос строки
        scanf("%d", &l);
        char string1[N] ;
        scanf("%s", &string1);//запрос строки
        int r = strncmp(string2, string1, l); //проверка равенства первых l символов в строках
        if (r == 0) {
            printf("Equal");//вывод результата проверка
        } else { printf("Not equal"); }
    }
    {
        char str1[15];
        scanf("%s",&str1);
        int n;
        scanf("%d",&n);
        char str2[n];
        strncpy(str2,str1,n);//копирую строку 1 в пустую строку 2
        printf(str2);

    }
    {
        char str1[15];
        scanf("%s\n",&str1);//строка, в которой будет осуществляться поиск
        char n;
        scanf("%c",&n);//запрос символа, который надо найти
        char *x = strchr(str1, n); // поиск символа n в строке
        if (x==NULL){ printf("Not found");}
        else{ printf("Found on place %d",x-str1+1);}//вывод номера места на котором найден элемент
    }
    {
        char str1[15];
        gets(str1);
        char str2[15];
        gets(str2);
        puts(str2);
        char* r=strstr(str1,str2);//поиск строки 2 в строке 1
        printf("%td",r-str1);// вывод номера места, в котором начинается строка 2 в строке 1

    }
    {
        char str1[15];
        gets(str1);
        char str2[15];
        gets(str2);
        printf("%d",strcspn(str1,str2));//вывод длины строки 1, в которой нет символов из строки 2
    }

}
