/*已知顺序表L1，L2中数据由小到大有序，请用尽可能快的方法将L1与L2中的数据合并到L3中，使数据在L3中按升序排列。*/

#include "sequlist.h"
/*请将本函数补充完整，并进行测试*/
void merge(sequence_list *L1,sequence_list *L2,sequence_list *L3)
{
    int i=0,j=0;
    initseqlist(L3);
    while (1) {
        if (i == L1->size && j == L2->size) {
            return 0;
        }
        else {
            if (i == L1->size) {
                while (j < L2->size) {
                    L3->a[L3->size++] = L2->a[j++];
                }
            }
            else if (j == L2->size) {
                while (i < L1->size) {
                    L3->a[L3->size++] = L1->a[i++];
                }
            }
            else {
                if (L1->a[i] < L2->a[j]) {
                    L3->a[L3->size++] = L1->a[i++];
                }
                else {
                    L3->a[L3->size++] = L2->a[j++];
                }
            }
        }
    }
}
int main()
{
    sequence_list L1,L2,L3;
    int cnt;
    input(&L1);				/*输入时请输入有序数据*/
    input(&L2);				/*输入时请输入有序数据*/
    merge(&L1,&L2,&L3);		/*合并数据到L3*/
    print(&L3);				/*输出L3*/
}
