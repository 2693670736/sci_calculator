#ifndef CALCU_H
#define CALCU_H
#include "cal.h" //���㵥Ԫ
#include "get2operator.h"//��ȡ������
#include "getnextchar.h"//��ȡ��һ���ַ�
#include "isdigit.h"//�ж��Ƿ�Ϊ����
#include "isoperator.h"//�ж��Ƿ�Ϊ������
#include "isp.h"//����վ�����ȼ�
#include "osp.h"//����վ�����ȼ�

#include "mylstack.h" //����ջ
#include "QString" //�����ַ���
#include "QDebug"

class calcu
{
public:
    calcu();
    //��ʼ��
    //MyLStack<double> OPND; //������ջ����
    //MyLStack<char> OPTR; //������ջ����
    QString ch; //���ʽ�ݴ�
    double getReult();
};

#endif // CALCU_H
