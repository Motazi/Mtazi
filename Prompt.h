#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char* buffer;
  size_t buffer_length;
  size_t input_length;
} InputBuffer;
void prompt();

#endif