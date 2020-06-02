#include<stdio.h>
#include<stdlib.h>

int main(){
  srand(time(NULL));
  char food[10][] = {"햄버거","치킨","짜장면","고기","국밥"};
  printf("오늘은 뭐 먹을까?");
  while(1){
    printf("Enter을 누르면 됩니다!\n");

    int length = sizeof(food)/sizeof(food[0]);
    int a = rand%lenght;
    printf("%s",food[a]);
    printf("종료하시려면 0을 누르세요!\n");
    int u;
    scanf("%d",&u);
    if(u == 0) break;
  }
  printf("오늘도 즐밥!\n");
  return 0;
}
