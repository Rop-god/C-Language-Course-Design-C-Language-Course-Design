#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void user_menu()
{
    int i,m,p,a;
    printf("===============================================\n");
    printf("1.ע����¼ 2.������� 3.�������� 4.������Ϣ����\n");
    printf("===============================================\n\n");
    printf("�����������\n");
    scanf("%d",&a);
    printf("\n");
    switch(a)
    {
        case 1:return;
               break;//ע����¼
        case 2:user_buyer();//��ҵ�¼
               break;
        case 3:user_seller();//���ҵ�¼
               break;
        case 4:personal_information();//������Ϣ����
                break;
        default: printf("������Ч��������ѡ��\n\n");
                user_menu();
    }

}
