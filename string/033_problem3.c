#include <stdio.h>

int strlen(char str[]) {
    int i = 0;
    int count;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i-1;
    return count;
}

void mystrcpy(char target[] , char source[]) {
    for (int i = 0; i < mystrlen(source); i++)
   
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
  
}

intmain() {
    char source[] = "sakshi";
    char target[30];
    mystrcpy(target,source);
    printf("%s %s" , target , source);
    return 0;
}