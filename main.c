#include<stdio.h>
#include<stdlib.h>
int main(){
  srand(time(NULL));
  char food[10][] = {"햄버거","치킨","짜장면","고기","국밥"};
  printf("오늘은 뭐 먹을까?");
  scanf("Enter을 누르면 됩니다!\n");
  
  int length = sizeof(food)/sizeof(food[0]);
  int a = rand%lenght;
  printf("%s",food[a]);
  
  return 0;
}
