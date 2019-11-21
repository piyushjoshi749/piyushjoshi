#include<stdio.h>
void Fun(char *,int);
void main()
{
  char arr[]="HELLo";
  Fun(arr,5);

}
void Fun(char arr[],int i)
{
  printf("%c",arr[i]);
  i--;
  if(i>-1)
    Fun(arr,i);
  else
    printf("\n");
}
