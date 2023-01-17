#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str) {
  int counter;

  counter = 0;
  while (str[counter] != '\0') {
    counter++;
  }
  return (counter);
}

char *ft_strjoin(char const *s1, char const *s2) {
  char *new_str;
  unsigned int i;
  unsigned int y;

  new_str = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
  if (!new_str)
    return ((void *)NULL);
  i = 0;
  y = 0;
  while (s1[i] != '\0') {
    new_str[i] = s1[i];
    i++;
  }
  while (s2[y] != '\0') {
    new_str[i] = s2[y];
    i++;
    y++;
  }
  new_str[i] = '\0';
  return (new_str);
}

void append_storage(char **storage) {
  char *str = "hello";
  char *temp;

  temp = ft_strjoin(*storage, str);
  free(*storage);
  *storage = temp;
}

int main(void) {
  static char *storage;

  storage = malloc(1 * sizeof(char));
  storage[0] = '\0';

  append_storage(&storage);
  append_storage(&storage);
  append_storage(&storage);

  printf("Storage final is {%s} at {%p}\n", storage, storage);
  //printf("temp final is {%s} at {%p}\n", temp, temp);
  free(storage);
  return 0;
}