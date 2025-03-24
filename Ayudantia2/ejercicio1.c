#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t a = fork();
    pid_t b = fork();
    if(a > 0 && b > 0){
        printf("Hola\n");
    }else if(a == 0 && b > 0){
        printf("Hello\n");
    }else if(a > 0 && b == 0){
        printf("Bonjour\n");
    }else if(a == 0 && b == 0){
        printf("Ciao\n");
    }else{
        printf("Hallo\n");
    }
    return 0;
}