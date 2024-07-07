#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
//    system("clear");
    char str[256];
    int length;
    scanf("%s", str);
    length = strlen(str);
    printf("Length of input excluding NULL -> %d\n",length);
    for(int i=0; i<(length/2); i++){
        char c = str[i];
        str[i] = str[length-i-1];
        str[length-i-1]=c;
        printf("%d\n",i);
    }
 printf("%s\n", str);
return 0;   
}
/*
 Algorithm:
 store first element
 set first element to final element
 set last element to stored element
 */