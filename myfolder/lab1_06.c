/*
��֪����Ϊn�����Ա�L����˳��洢�ṹ����дһ�����Ӷ�ΪO(n)��
�ռ临�Ӷ�ΪO(1)���㷨�����㷨ɾ�����Ա�������ֵΪx������Ԫ�ء�
*/
/**********************************/
/*�ļ����ƣ�lab1_06.c                 */
/**********************************/
#include "sequlist.h"
/*�뽫���������������������в���*/
/*�ⷨһ����k��¼˳���L�в�����x��Ԫ�ظ���������Ҫ�����Ԫ�ظ�������
  ��ɨ��L��ͳ��k������������x��Ԫ����ǰ����kλ���ϣ�����޸�L�ĳ��ȡ�
  */
void delNode1(sequence_list *L,datatype x)
{
    int cnt = 0;
    for (int i = 0; i < L->size; i++) {
        if (L->a[i] != x) {
            L->a[cnt] = L->a[i];
            cnt += 1;
        }
    }
    L->size = cnt;
}
/*
    �ⷨ������k��¼˳���L�е���x��Ԫ�ظ�������ɨ��L��ͳ��K����������
    ��x��Ԫ��ǰ��k��λ�ã�����޸�L�ĳ��ȡ�
*/
void delNode2(sequence_list *L,datatype x)
{
    int cnt = 0;
    for (int i = 0; i < L->size; i++) {
        if (L->a[i] == x) {
            cnt += 1;
        }
        else {
            L->a[i - cnt] = L->a[i];
        }
    }
    L->size -= cnt;
}
int main()
{
  sequence_list L;
  int x;
  input(&L);
  print(&L);  	/*�����L*/
  printf("������Ҫɾ��������");
  scanf_s("%d",&x);
  //delNode1(&L,x);			/*�ֱ����*/
  delNode2(&L,x);
  printf("ɾ��%d���˳���Ϊ��\n",x);
  print(&L);  						/*����±�*/
  return 0;
}
