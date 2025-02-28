#include "../include/showPasswords.h"
#include "../include/passGen.h"
#include "../include/saveNewPassword.h"
#include <stdio.h>


int main()
{
  printf("░██████╗░░░░░░░██████╗░░█████╗░░██████╗░██████╗\n"
    "██╔═══██╗░░░░░░██╔══██╗██╔══██╗██╔════╝██╔════╝\n"
    "██║██╗██║█████╗██████╔╝███████║╚█████╗░╚█████╗░\n"
    "╚██████╔╝╚════╝██╔═══╝░██╔══██║░╚═══██╗░╚═══██╗\n"
    "░╚═██╔═╝░░░░░░░██║░░░░░██║░░██║██████╔╝██████╔╝\n"
    "░░░╚═╝░░░░░░░░░╚═╝░░░░░╚═╝░░╚═╝╚═════╝░╚═════╝░\n");

  printf("\nSelect an option:\n"
    "1. View saved passwords\n"
    "2. Save a new password\n"
    "3. Generate \n");
  
  int choice;
  scanf("%d", &choice);
  getchar();
  FILE *file = fopen("../data/passwords.txt", "a");

  switch(choice)
  {
    case 1:
      showPasswords();
      break;

    case 2:
      saveNewPassword();
      break;

    case 3:
      int length;

      printf("Enter your password length: ");
      scanf("%d", &length);
      generatePassword(length);
      break;
  }
  return 0;
}