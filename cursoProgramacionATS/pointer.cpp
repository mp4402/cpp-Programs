#include <stdio.h>

void my_int_func(int x) { 
	printf("%d\n", x); 
}

int main() {
  void (*foo)(int);
  /* the ampersand is actually optional */
  foo = &my_int_func;
  my_int_func(3);
  printf("%d",foo);
  return 0;
}
