/**
 ��������� �������
  x=(((a+b)*c)/(m-n))^2
 **/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    double a,b,c,m,n; // �������� �������

    double x; // ���������

    printf("input a ");
    scanf("%lf",&a);

    printf("input b ");
    scanf("%lf",&b);

    printf("input c ");
    scanf("%lf",&c);

    printf("input m ");
    scanf("%lf",&m);

    printf("input n ");
    scanf("%lf",&n);

    if (fabs(m-n)>0.00000000001) { //�������� ��� ���������� ������� �� 0
            x = ((a + b) * c) / (m - n);
            printf("x is %f", x * x);
    }
    else printf("error: m = n!!!");

    return 0;
}
