#include <stdio.h>

int main(){

  int n1, n2, n3;
  int *p1, *p2, *p3;

  p1 = &n1;
  p2 = &n2;
  p3 = &n3;

  scanf("%d %d %d", p1, p2, p3);

  if((*p1 >= *p2) && (*p1 >= *p3)){

    if((*p2 >= p3)){

      printf("%d %d %d", *p3, *p2, *p1);

    }else if((*p3 > p2)){

      printf("%d %d %d", *p2, *p3, *p1);
    }

}
else if((*p2 >= *p1) && (*p2 >= *p3)){

  if(*p1 >= *p3){

     printf("%d %d %d", *p3, *p1, *p2);

  }else if(*p3 >= *p1){

     printf("%d %d %d", *p1, *p3, *p2);

  }

}
else if((*p3 >= *p1) && (*p3 >= *p2)){

  if(*p1 >= *p2){

     printf("%d %d %d", *p2, *p1, *p3);

  }
  else if(*p2 >= *p1){

     printf("%d %d %d", *p1, *p2, *p3);
  }
}

  return 0;
}
