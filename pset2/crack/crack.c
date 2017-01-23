#define _XOPEN_SOURCE
#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<crypt.h>
#include<unistd.h>

int increment(int index){
    if(index == 90){
        index = 97;
    }
    else{
        index++;
    }
    return index;
}

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Usage: ./crack hash\n");
        return 1;
    }
    const char *const salt = "50";
    char *result;
    int passfound = 0;
    char *hash = argv[1];
    char *password;
    int index1= 65, index2, index3, index4;
    while(index1<=122){
        index2 = 65;
        while(index2<=122){
            index3 = 65;
            while(index3<=122){
                index4 = 65;
                while(index4<=122){
                    sprintf(password, "%c%c%c%c",index1, index2, index3, index4);
                    result = crypt(password, salt);
                    if(strcmp(result, hash) == 0){
                        printf("%s\n", password);
                        passfound = 1;
                        break;
                    }
                    index4 = increment(index4);
                }
                if(passfound == 1){
                    break;
                }
                index3 = increment(index3);
            }
            if(passfound == 1){
                break;
            }
            index2 = increment(index2);
        }
        if(passfound == 1){
            break;
        }
        index1 = increment(index1);
    }
    //printf("%s\n", password);
    return 0;
}
