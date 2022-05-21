#include <stdio.h>
#include <stdlib.h>

int main() {

FILE *file = fopen("ex2.txt", "r");
char name[100], job[100];
int age;
double wage_min, wage;

if(file == NULL){
  printf("Erro na leitura do arquivo");
  exit(1);
}

scanf("%lf", &wage_min);

while (fscanf (file, "%s %d %s %lf", name, &age, job, &wage) != EOF)
  {
   
    if(wage >= wage_min){
        printf ("%s\n%d\n%s\n%.0lf\n", name, age, job, wage);
    }

  }

  fclose(file);
  return 0;
} 
