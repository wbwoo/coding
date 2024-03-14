#include <math.h>
#include <stdio.h>

int main(void) {

  printf("방향이 같으면 1, 다르면 0을 입력하고 모멘트 값 2개, 각을 순서대로 입력하세요.\n");

  int a;
  double l1;
  double l2;
  double x;
  double k;
  double s;

  scanf("%d", &a);
  scanf("%lf %lf %lf", &l1, &l2, &x);
  if ((a == 1)&&(x<90)) {
    k = l1 * l1 + l2 * l2 - 2 * l1 * l2 * cos(x * 3.14 / 180);
    s = sqrt(k);
    printf("%0.2lf", s);
  }

  else if ((a == 1)&&(x>=90)) {
    k = l1 * l1 + l2 * l2 + 2 * l1 * l2 * cos(x * 3.14 / 180);
    s = sqrt(k);
    printf("%0.2lf", s);
  }

  else if ((a == 0)&&(x>=90)) {
    k = l1 * l1 + l2 * l2 - 2 * l1 * l2 * cos(x * 3.14 / 180);
    s = sqrt(k);
    printf("%0.2lf", s);
  }

  else if ((a == 0)&&(x<90)) {
    k = l1 * l1 + l2 * l2 + 2 * l1 * l2 * cos(x * 3.14 / 180);
    s = sqrt(k);
    printf("%0.2lf", s);
  }
  
  return 0;
}
