#include <math.h>
#include <stdio.h>

int main(void) {

  printf("쌍극자 모멘트를 구하고 싶은 원소를 입력하세요.\n");

  char a, b;
  float p;
  float q1 = 3.44;
  float q2 = 2.20;
  float q3 = 2.55;
  float q4 = 3.04;
  float q5 = 3.98;

  scanf("%c %c", &a, &b);
  if ((a == 'O') && (b == 'H')) {
    p = (q1 - q2) * 0.035 * 97;
    printf("%0.3f", p);
  } else if ((a == 'O') && (b == 'C')) {
    p = (q1 - q3) * 0.035 * 143;
    printf("%0.3f", p);
  } else if ((a == 'O') && (b == 'N')) {
    p = (q1 - q4) * 0.035 * 136;
    printf("%0.3f", p);
  } else if ((a == 'H') && (b == 'C')) {
    p = (q3 - q2) * 0.035 * 108;
    printf("%0.3f", p);
  } else if ((a == 'H') && (b == 'N')) {
    p = (q4 - q2) * 0.035 * 101;
    printf("%0.3f", p);
  } else if ((a == 'C') && (b == 'N')) {
    p = (q4 - q3) * 0.035 * 147;
    printf("%0.3f", p);
  } else if ((a == 'F') && (b == 'H')) {
    p = (q5 - q2) * 0.035 * 93;
    printf("%0.3f", p);
  } else if ((a == 'F') && (b == 'N')) {
    p = (q5 - q4) * 0.035 * 136;
    printf("%0.3f", p);
  } else if ((a == 'F') && (b == 'C')) {
    p = (q5 - q3) * 0.035 * 138;
    printf("%0.3f", p);
  } else if ((a == 'F') && (b == 'O')) {
    p = (q5 - q1) * 0.035 * 142;
    printf("%0.3f", p);
  } else if ((a == 'H') && (b == 'O')) {
    p = (q1 - q2) * 0.035 * 97;
    printf("%0.3f", p);
  } else if ((a == 'C') && (b == 'O')) {
    p = (q1 - q3) * 0.035 * 143;
    printf("%0.3f", p);
  } else if ((a == 'N') && (b == 'O')) {
    p = (q1 - q4) * 0.035 * 136;
    printf("%0.3f", p);
  } else if ((a == 'C') && (b == 'H')) {
    p = (q3 - q2) * 0.035 * 108;
    printf("%0.3f", p);
  } else if ((a == 'N') && (b == 'H')) {
    p = (q4 - q2) * 0.035 * 101;
    printf("%0.3f", p);
  } else if ((a == 'N') && (b == 'C')) {
    p = (q4 - q3) * 0.035 * 147;
    printf("%0.3f", p);
  } else if ((a == 'H') && (b == 'F')) {
    p = (q5 - q2) * 0.035 * 93;
    printf("%0.3f", p);
  } else if ((a == 'N') && (b == 'F')) {
    p = (q5 - q4) * 0.035 * 136;
    printf("%0.3f", p);
  } else if ((a == 'C') && (b == 'F')) {
    p = (q5 - q3) * 0.035 * 138;
    printf("%0.3f", p);
  } else if ((a == 'O') && (b == 'F')) {
    p = (q5 - q1) * 0.035 * 142;
    printf("%0.3f", p);
  }

  else if (a == b) {
    printf("0");
  }

  return 0;
}

