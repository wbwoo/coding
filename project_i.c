#include <stdio.h>

int main(void) {
  int chem1, chem2, chem3, chem4, chem5;
  printf("자신이 만든 화학물질(산소, 수소, 탄소, 질소, 플루오린)의 개수를 각각 순서대로 "
         "입력하세요 : \n");
  scanf("%d %d %d %d %d", &chem1, &chem2, &chem3, &chem4, &chem5);
  if ((chem1 == 0) && (chem2 == 1) && (chem3 == 1) && (chem4 == 1) && (chem5 == 0) )
    printf("사이안화수소");
  else if ((chem1 == 3) && (chem2 == 2) && (chem3 == 1) && (chem4 == 0) && (chem5 == 0) )
    printf("탄산");
  else if ((chem1 == 3) && (chem2 == 1) && (chem3 == 0) && (chem4 == 1) && (chem5 == 0) )
    printf("질산");
  else if ((chem1 == 0) && (chem2 == 3) && (chem3 == 0) && (chem4 == 1) && (chem5 == 0) )
    printf("암모니아");
  else if ((chem1 == 1) && (chem2 == 2) && (chem3 == 0) && (chem4 == 0) && (chem5 == 0) )
    printf("물");
  else if ((chem1 == 1) && (chem2 == 0) && (chem3 == 1) && (chem4 == 0) && (chem5 == 0) )
    printf("일산화탄소");
  else if ((chem1 == 2) && (chem2 == 0) && (chem3 == 1) && (chem4 == 0) && (chem5 == 0) )
    printf("이산화탄소");
  else if ((chem1 == 1) && (chem2 == 0) && (chem3 == 0) && (chem4 == 1) && (chem5 == 0) )
    printf("일산화질소");
  else if ((chem1 == 2) && (chem2 == 0) && (chem3 == 0) && (chem4 == 2) && (chem5 == 0) )
    printf("이산화질소");
  else if ((chem1 == 3) && (chem2 == 0) && (chem3 == 0) && (chem4 == 1) && (chem5 == 0) )
    printf("삼산화질소");
  else if ((chem1 == 0) && (chem2 == 4) && (chem3 == 2) && (chem4 == 0) && (chem5 == 0) )
    printf("에틸렌");
  else if ((chem1 == 1) && (chem2 == 1) && (chem3 == 0) && (chem4 == 1) && (chem5 == 0) )
    printf("나이트록실");
  else if ((chem1 == 0) && (chem2 == 4) && (chem3 == 1) && (chem4 == 0) && (chem5 == 0) )
    printf("메테인");
  else if ((chem1 == 0) && (chem2 == 0) && (chem3 == 1) && (chem4 == 0) && (chem5 == 4) )
    printf("사불화탄소");
  else if ((chem1 == 1) && (chem2 == 2) && (chem3 == 1) && (chem4 == 0) && (chem5 == 0) )
    printf("폼알데하이드");
  else if ((chem1 == 1) && (chem2 == 6) && (chem3 == 2) && (chem4 == 0) && (chem5 == 0) )
    printf("에탄올, 다이메틸 에테르");
  else if ((chem1 == 2) && (chem2 == 2) && (chem3 == 0) && (chem4 == 0) && (chem5 == 0) )
    printf("과산화수소");
  else if ((chem1 == 0) && (chem2 == 2) && (chem3 == 0) && (chem4 == 2) && (chem5 == 0) )
    printf("디이미드");
  else if ((chem1 == 2) && (chem2 == 1) && (chem3 == 0) && (chem4 == 1) && (chem5 == 0) )
    printf("아질산");
  else if ((chem1 == 0) && (chem2 == 0) && (chem3 ==2) && (chem4 == 2) && (chem5 == 0) )
    printf("시아노겐");
  else if ((chem1 == 3) && (chem2 == 8) && (chem3 ==3) && (chem4 == 0) && (chem5 == 0) )
    printf("글리세롤");
  else if ((chem1 == 1) && (chem2 == 12) && (chem3 ==6) && (chem4 == 0) && (chem5 == 0) )
    printf("싸이클로헥산올");
  else if ((chem1 == 0) && (chem2 == 6) && (chem3 ==3) && (chem4 == 0) && (chem5 == 0) )
    printf("프로필렌");
    
    
  else
    printf("존재하는 화합물이 없습니다");

  return 0;
}
