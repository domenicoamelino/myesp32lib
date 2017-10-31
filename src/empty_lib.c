#include "mgos.h"
#include <stdio.h>

bool mgos_empty_init(void) {
  return true;
}

bool mgos_empty_print()
{
    printf("I am the most fake library API ever seen\n");
}