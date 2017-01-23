#define _XOPEN_SOURCE
#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<crypt.h>
#include<unistd.h>

int main(){
    const char *const salt = "50";
    const char *const pass = "tomc";
    char *result = crypt(pass, salt);
    printf("%s\n", result);
}
