/*
���дһ���㷨����partion(sequence_list *L)�������ܿ�ؽ�˳���L�е��������������������ߣ�
����ż������������ұߣ��������㷨��ʱ�临�Ӷȡ�
*/
/**********************************/
/*�ļ����ƣ�lab1_05.c                 */
/**********************************/
#include "sequlist.h"
/*�뽫���������������������в���*/
void partion(sequence_list *L)
{
	int tmp;
	int i = 0, j = L->size - 1;
	while(i < j){
		while (L->a[i] % 2 != 0 && i<j) {
			i++;
		}
		while (L->a[j] % 2 == 0 && i<j) {
			j--;
		}
		tmp = L->a[i];
		L->a[i] = L->a[j];
		L->a[j] = tmp;
	}
	return 0;
}
int main()
{
  sequence_list L;
  /*ͬ�ϣ��ҵĵ��Ի�����֧���������
  inputfromfile(&L,"3.txt");*/
  input(&L);
  print(&L);  						/*�����L*/
  partion(&L);
  print(&L);  						/*����±�*/
  return 0;
}
//n:=L->size��ʱ�临�Ӷ�ΪO(n)��ƿ����˫ָ������飬i,j���ȡL�е�ÿ��Ԫ�ء�
//�ռ临�Ӷ�ΪO(1)��ֻ�����˳�������ʱ����tmp,i,j��
