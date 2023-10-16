#include "3-calc.h"

int (*get_op_func(char *s))(int, int) {
  op_t ops[] = {
    {"+", add},
    {"-", sub},
    {"*", mul},
    {"/", divide},
    {"%", mod},
    {NULL, NULL}
  };
  int i = 0;

  while (ops[i].op) {
    if (*s == *(ops[i].op)) {
      return (ops[i].f);
    }
    i++;
  }

  printf("Error
");
  exit(99);
}
