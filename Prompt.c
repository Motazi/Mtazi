#include "Prompt.h"

void prompt(char command[])
{

  while(true)
  {

    printf(">");
    fgets(command, 100,stdin);
    printf("%s\n",command);

  }

}

int main(int argc, char* argv[])
{
  char command[100] = "";
  prompt(command);

}

