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

void ft_get_next_line(char *storage, char *temp) {
  char *str = "hello";
  // char *temp;

  temp = ft_strjoin(storage, str);
  printf("temp is {%p}\n", temp);
  free(storage);
  storage = temp;
  printf("Storage is {%s} at {%p}\n", storage, storage);
  printf("temp is {%s} at {%p}\n", temp, temp);
  // return (0);
}

int main(void) {
  char *storage;
  char *str;
  char *appended_storage;
  char *temp;

  storage = malloc(1 * sizeof(char));
  storage[0] = '\0';
  printf("Storage is {%s}\n", storage);
  ft_get_next_line(storage, temp);
  ft_get_next_line(storage, temp);
  ft_get_next_line(storage, temp);


  printf("Storage final is {%s} at {%p}\n", storage, storage);
  printf("temp final is {%s} at {%p}\n", temp, temp);

  return 0;
}