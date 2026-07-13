#include<stdio.h>
int main()
{ int age;
  printf("enter age");
  scanf("%d",&age);
  if (age>18 && age<25)
  {
    printf("student is applicable for this exam\n");
}
  else
  {
    printf("Not applicable ");
  }
}