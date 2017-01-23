#define _XOPEN_SOURCE
#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<crypt.h>
#include<unistd.h>

int incrementIndexAccordingToSalt(int previousIndex) {
    if(previousIndex == 57) {
        return 65;
    } else if(previousIndex == 90) {
        return 97;
    } else {
        return ++previousIndex;
    }
}

int main(){
    const char *const output = "50fkUxYHbnXGw";
    const char *const password = "rofl";
    char *salt;
    int saltFound = 0;
    int outerIndex = 46;

    
    while(outerIndex <= 122) {
        int innerIndex = 46;
        while(innerIndex <= 122) {
            sprintf(salt, "%c%c", outerIndex, innerIndex);
            char* tempOutput = crypt(password, salt);
            int saltComparisionResult = strcmp(tempOutput, output);
            if(saltComparisionResult == 0) {
                printf("salt is %s", salt);
                saltFound = 1;
                break;
            }
            innerIndex = incrementIndexAccordingToSalt(innerIndex);
        }
        if(saltFound) {
            break;
        }
        outerIndex = incrementIndexAccordingToSalt(outerIndex);
    }
    return 0;
}
