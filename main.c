#include<stdio.h>
int main(){
    int SZhi_1,SZhi_2; //��ֵ1����ֵ2
    int YSZhi;  //����ֵ
    char Fhao;  //����
    printf("�������һ�����֣�");
    scanf("%d",&SZhi_1);
    printf("������ڶ������֣�");
    scanf("%d",&SZhi_2);
    printf("���������ǡ�+�����ǡ�-����");
    scanf("%c",&Fhao);
    if(Fhao == '+'){
        YSZhi = SZhi_1 + SZhi_2;
        printf("����1��������2�õ���%d",YSZhi);
    }
    else if(Fhao == '-'){
        YSZhi = SZhi_1 - SZhi_2;
        printf("����1��ȥ����2�õ���%d",YSZhi);
    }
    return 0;
    }
