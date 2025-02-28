#include "../include/showPasswords.h"
#include <stdio.h>

void showPasswords()
{
    FILE *file = fopen("../data/passwords.txt", "r");
    
    if (file == NULL) {
        printf("Error: Cannot open file!\n");
        return;
    }

    char line[100]; 
    printf("\n=== Saved Passwords ===\n");

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line); 
    }

    fclose(file);
}
