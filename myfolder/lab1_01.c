/**********************************/
/*�ļ����ƣ�lab1-01.c             */
/**********************************/
/*����sequlist.h�ж����˳�����д�㷨����reverse(sequence_list *L)��ʵ��˳���ľ͵ص��á�*/
#include "sequlist.h"
/*�뽫���������������������в���*/
void reverse(sequence_list *L)
{
    int tmp,i=0,j=L->size-1;
    while (i < j) {
        tmp = L->a[i];
        L->a[i] = L->a[j];
        L->a[j] = tmp;
        i += 1;
        j -= 1;
    }
    return 0;
}
int main()
{
    sequence_list L;			/*����˳���*/
    input(&L);	        		/*�����������*/
    print(&L);                  /*���ԭ��*/
    reverse(&L);		            /*˳�����*/
    print(&L);                  /*����±�*/
}
