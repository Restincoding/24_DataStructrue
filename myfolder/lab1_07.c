/*
����n(n>1)��������ŵ�˳���L�С������һ��ʱ��Ϳռ�������
�����ܸ�Ч���㷨����˳�������������ѭ������p(0<p<n)��λ�ã�
����L�е��������У�X0,X1,��,Xn-1���任Ϊ��Xp,Xp+1,��,Xn-1,X0,X1,��,Xp-1����
*/
#include "sequlist.h"
void reverse(sequence_list *L,int left,int right);//��������reverse()��ʵ��˳���L->a[left..right]������β���á�
/*
    �ⷨ1������leftShift1()�Ĺ�����ʵ��˳���ѭ������pλ���������ʾ���ú�������������
*/
void leftShift1(sequence_list *L,int p)
{
    if (p>0 && p<L->size)
    {
        reverse(L, 0, L->size-1);                 //��˳���L��ȫ�����ݵ���
        reverse(L, 0, L->size-1-p);                 //��˳���L��ǰn-p��Ԫ�ص���
        reverse(L, L->size - p, L->size - 1);                //��˳���L�ĺ�p��Ԫ�ص���
    }
}
/*
    �ⷨ2:����leftShift2()�Ĺ�����ʵ��˳���ѭ������pλ���������ʾ���ú�������������
*/
void leftShift2(sequence_list *L,int p)
{
    if (p>0 && p<L->size)
    {
    reverse(L, 0, p-1);                           //��˳���L��ǰp��Ԫ�ص���
    reverse(L, p,L->size-1);                       //��˳���L�ĺ�n-p��Ԫ�ص���
    reverse(L, 0, L->size - 1);                            //��˳���Lȫ��Ԫ�ص���
    }
}
//��������reverse()��ʵ��˳���L->a[left..right]������β���á�
void reverse(sequence_list *L,int left,int right)
{
    int i=left,j=right,temp;
    while(i<j)
    {
        temp=L->a[i];
        L->a[i]=L->a[j];
        L->a[j]=temp;
        i++;
        j--;
    }
}
int main()
{
  sequence_list L;
  int p=0;
  input(&L);
  printf("���Ա�Ϊ��\n",p);
  print(&L);  	/*�����L*/
  printf("������ѭ�����Ƶ�λ����");
  scanf_s("%d",&p);
  //leftShift1(&L,p);             //���Է���1
  leftShift2(&L,p);       //���Է���2
  printf("ѭ������%dλ������Ա�Ϊ��\n",p);
  print(&L);  						/*����±�*/
  return 0;
}
