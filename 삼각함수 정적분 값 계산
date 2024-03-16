#include <stdio.h>
#include <math.h> // sin, cos, 절대값 라이브러리 함수 헤더

int main() {
int i, n=10; // n의 간격을 10으로 설정

double a2, b2, dx2, A_1, A_2, A_3, A_4, y3, index2=1;

printf("구간을 입력해주세요. ex) [a, b] -> a~b\n"); 
scanf("%lf %lf", &a2, &b2);

A_1=sin(a2); // A_1을 x=a2에서의 사인값으로 설정 
A_2=A_1; // 초기값으로 A_2에 A_1을 저장

while(index2>0.01){
 A_1=A_2;
 dx2=(b2-a2)/n; // 입력 받은 x값의 변화량 계산

 double v[n+1]; 
 for(i=0;i<n+1;i++){
 
v[i]=sin(a2+i*dx2); // 밑면 구하기
} 

for(i=0;i<n+1;i++){

 if(i==0){ 
    A_2=v[i];}

else if(i==n){
 A_2=A_2+v[i];}
else{
 A_2=A_2+2*v[i];}
} // 밑면 더하기

A_2=A_2*dx2/2; // 더한 밑면 x 높이 / 2
n=n*10;

index2=fabs(A_1-A_2); 
} // 절대값 변환

A_3=cos(a2); // A_3을 x=a2에 서의 코사인값으로 설정

A_4=A_3; // 초기값으로 A_4 에 A_3을 저장

while(index2>0.01){ 
A_3=A_4;
dx2=(b2-a2)/n; // 입력 받은 x 값의 변화량 계산

double v[n+1]; 
for(i=0;i<n+1;i++){

v[i]=cos(a2+i*dx2); 

} // 밑면 구하기 

for(i=0;i<n+1;i++){

if(i==0){ 
A_4=v[i];}

else if(i==n){
 A_4=A_4+v[i];}

else{ 
A_4=A_4+2*v[i];}
A_4=A_4*dx2/2; // 더한 밑면 x 높이 / 2 n=n*10;

index2=fabs(A_3-A_4); // 절대값 변환 
}

printf("sin함수의 정적분 결과는 %.2lf 입니다.\n", A_2); 
printf("cos함수의 정적분 결과는 %.2lf 입니다.", A_4);

return 0; 

}
