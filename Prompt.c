#include "Prompt.h"

void prompt(char command[])
{
  while(true)
  {
    int a = 0;
    printf(">");
    fgets(command, 100,stdin);
    command[strlen(command) - 1] = 0;
    a = strcmp(command, "exit");
    if (a==0)
    {
      exit(1);
    }
  }

}

int main(int argc, char* argv[])
{

  char command[100] = "";
  prompt(command);




}


