#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Please only give me one argument.");
    return 1;
  }

  int i = 0;
  for(i = 0; argv[1][i] != "\0"; i++) {
    char letter = argv[1][i];
    printf("%c", letter);
  }
}
