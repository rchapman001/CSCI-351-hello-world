/* hash algorithm, as presented in K&R version 2 */
#include <stdio.h>
#include <stdlib.h>
unsigned hash(const char *s) {
  unsigned hashval;
  for (hashval = 0; *s != '\0'; s++)
    hashval = *s + 31 * hashval;
  return hashval;
}

/* program entry point */
int main(int argc, char *argv[]) {
  const char * user = getenv("USER");
  printf("\
    hello, %s\n\
    To complete this assignment, please submit the following code using the\n\
    textbox submission on Canvas. Your code is:\n\n\
    %u\n\
  ", user, hash(user));
}
