#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
using namespace std;
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
struct sf bian;
void admin_menu()
{
    int n,i,j,a;
    printf("======================================================================================\n");
    printf("1.�鿴������Ʒ 2.������Ʒ 3.�鿴���ж��� 4.�鿴�����û� 5.ɾ���û� 6.�¼���Ʒ 7.ע��\n");
    printf("======================================================================================\n");
     printf("\n");
     printf("���������\n");
     scanf("%d",&n);
    switch(n)
    {
        case 1:check_all_goods();//�鿴������Ʒ
                break;
        case 2:search_all_goods();//������Ʒ
               break;
        case 3:check_all_goods_list();//�鿴���ж���
               break;
        case 4:check_all_users();//�鿴�����û�
               break;
        case 5:delete_users();//ɾ���û�
               break;
        case 6:off_shelf_goods();//�¼���Ʒ
               break;
        case 7:return;//ע��
               break;
        default:printf("******��Ч���������������룡******\n\n");
               admin_menu();
    }

}
