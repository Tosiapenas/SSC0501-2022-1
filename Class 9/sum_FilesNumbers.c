#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *numbers;
  int i = 0, sum = 0;
  FILE *file;

  numbers = (int *)malloc(sizeof(int));

  file = fopen("ex1.txt", "r");

  if(file == NULL){
    printf("Erro na leitura do arquivo");
    exit(1);
    }
  
    while (fscanf(file, "%d", &numbers[i]) != EOF)
    {
      sum += numbers[i];
      i++;
    } 
    numbers[i] = '\0';

  printf("%d", sum);

  fclose(file);
  free(numbers);
  return 0;
}
