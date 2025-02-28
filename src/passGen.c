#include "../include/passGen.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(int length) {
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$/&*_-+=";
    int charsetSize = sizeof(charset) - 1;
    
    char password[length + 1];
    srand(time(NULL)); 

    for (int i = 0; i < length; i++) {
        password[i] = charset[rand() % charsetSize]; 
    }
    password[length] = '\0'; 

    printf("Generated password: %s\n", password);
}
