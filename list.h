#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <string>
using namespace std;
//�û���Ϣ
struct sa{
    char id[10];//�û�ID
    char name[15];//�û���
    char password[25];//����
    char ci[25];//��ϵ��ʽ
    char adress[200];//��ַ
    double bl;//Ǯ�����
};
//��Ʒ��Ϣ
struct sc{
    char id[7]; // ��ƷID
    char name[15]; // ��Ʒ����
    double price; // ��Ʒ�۸�
    char description[101]; // ��Ʒ������Ϣ
    char seller_id[7]; // ����ID
    char publish_time[50]; // �ϼ�ʱ��
    char status[11]; // ��Ʒ״̬
};
struct sd{
char id[10];//����ID
char cid[10];//��ƷID
double at;//���׽��
char timeo[15];//����ʱ��
char seid[10];//����ID
char byid[10];//���ID
};
struct sf
{
    int num1;
    int num2;
};

//extern struct sa YH;
//extern struct sc item;
//extern int num1;
//extern int num2;
#endif // LIST_H_INCLUDED
