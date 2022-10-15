#ifndef CALCU_H
#define CALCU_H
#include "cal.h" //���㵥Ԫ
#include "get2operands.h"//��ȡ������
#include "getnextchar.h"//��ȡ��һ���ַ�
#include "isoperator.h"//�ж��Ƿ�Ϊ������
#include "isp.h"//����վ�����ȼ�
#include "osp.h"//����վ�����ȼ�
#include "isdigit.h"
#include "mylstack.h" //����ջ
#include "QString" //�����ַ���
#include "QDebug"

class calcu
{
public:
    calcu();
    //��ʼ��

    //ջ��ʱδд��
    //MyLStack<double> OPND; //������ջ����
    //MyLStack<char> OPTR; //������ջ����
    QString formula; //���ʽ�ݴ�
    char prior_char;//��ǰ�����ַ���ǰһ���ַ�
    char ch;//��ǰ������ַ�
    double r;//��Ԫ�������ݴ�
    QString message;
    cal *mycal;//������㵥Ԫ
    getnextchar *mygetnextchar;
    get2operands *myget2operands;
    isoperator *myisoperator;
    isp *myisp;
    osp *myosp;
    Isdigit *myisdigit;

    double getReult();//���ش�
};

#endif // CALCU_H
