#include "calcu.h"

calcu::calcu()
{
    mycal=new cal();
    mygetnextchar=new getnextchar();
    myget2operands=new get2operands();
    myisdigit=new Isdigit();
    myisoperator = new isoperator();
    myisp=new isp();
    myosp=new osp();
    message="";
}

double calcu::getReult()
{
    //���д
    //���д��������message��������-1.0
  return 100.12123;
}
