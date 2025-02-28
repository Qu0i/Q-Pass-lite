#include "../include/saveNewPassword.h"
#include <stdio.h>

int saveNewPassword() {
  FILE *file = fopen("../data/passwords.txt", "a");

  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }

  char site[30], login[30], password[50];

  printf("Enter site: ");
  scanf("%s", site);
  printf("Enter your login: ");
  scanf("%s", login);
  printf("Enter your password: ");
  scanf("%s", password);

  fprintf(file, "site: %s\n", site);
  fprintf(file, "login: %s\n", login);
  fprintf(file, "password: %s\n", password);
  fprintf(file, "-------------------------\n");

  fclose(file);
  printf("Data saved successfully\n");

  return 0;
}