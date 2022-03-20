#include <stdio.h>

int main()
{
    int i;
    int *ptr;
    int **dptr;
    i = 1234;

    printf("[----- [������] [2019038015] -----]\n\n");

    printf("[checking values before ptr = &i] \n");         // ���� �����͸� ������� �ʾ��� ��
    printf("value of i == %d\n", i);                        // ���� i�� �ִ� ���� ����Ѵ�.
    printf("address of i == %p\n", &i);                     // ���� i�� �ּҰ��� ����Ѵ�.
    printf("value of ptr == %p\n", ptr);                    // ���� ptr�� ���� ����Ѵ�. (+���� ptr�� ���� i�� �ּҰ��� ���� �ʾ����Ƿ� 
                                                            //                             ptr�� i�� ������ �����ʴ´�.)
    printf("address of ptr == %p\n", &ptr);                 // ���� ptr�� ������ �ִ� �ּҰ��� ����Ѵ�.

    ptr = &i; /* ptr is now holding the address of i */     

    printf("\n[checking values after ptr = &i] \n");        // ���� ���ķ� ptr�� i�� �ּҰ��� ���� �ȴ�.
    printf("value of i == %d\n", i);                        // ���� i�� ���� ����Ѵ�.
    printf("address of i == %p\n", &i);                     // ���� i�� �ּҰ��� ����Ѵ�.
    printf("value of ptr == %p\n", ptr);                    // ptr�� ���� ����Ѵ�. (+�̶����� ptr�� ���� i�� ����Ų��.)
    printf("address of ptr == %p\n", &ptr);                 // ptr�� �ּҰ��� ptr�� ������ ����ִ� ������ �ٸ��Ƿ� 
                                                            // �����͸� �ϱ� ���� �����ϴ�.
    printf("value of *ptr == %d\n", *ptr);                  // ptr�� ���� i�� ����Ű�� �����Ƿ� *ptr�� i�� ���� ����Ѵ�.

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");     // dptr���� ptr �ּҰ� �ֱ�
    printf("value of i == %d\n", i);                        // ���� i�� ���� ����Ѵ�.
    printf("address of i == %p\n", &i);                     // ���� i�� �ּҰ��� ����Ѵ�.
    printf("value of ptr == %p\n", ptr);                    // ptr�� ���� ����Ѵ�. (+�̶����� ptr�� ���� i�� ����Ų��.)
    printf("address of ptr == %p\n", &ptr);                 // ptr�� �ּҰ��� ptr�� ������ ����ִ� ������ �ٸ��Ƿ� 
                                                            // �����͸� �ϱ� ���� �����ϴ�
    printf("value of *ptr == %d\n", *ptr);                  // ptr�� ���� i�� ����Ű�� �����Ƿ� *ptr�� i�� ���� ����Ѵ�.
    printf("value of dptr == %p\n", dptr);                  // dptr = &ptr�̹Ƿ� dptr�� ptr�� �ּҰ��� ������ �ִ�.(==dptr�� ptr�� ����Ű�� �ִ�.)
    printf("address of dptr == %p\n", &dptr);               // ������ dptr�� ������ �ּҰ��� ������ �ִ�.
    printf("value of *dptr == %p\n", *dptr);                // *dptr�� dptr�� ������ �ִ� ����Ű�� ���� ���� ����Ѵ�.
                                                            //        /* dptr�� ����Ű�°� == ptr
                                                                      /* dptr�� ����Ű�°��� �� == ptr�� ����ִ� �� == i�� �ּҰ�*/
    printf("value of **dptr == %d\n", **dptr);              // **dptr�� dptr�� ����Ű�� ������ �� ����Ű�� ���� ���� ����Ѵ�.
                                                            //        /* dptr�� ����Ű�°� == ptr
                                                                      /* dptr�� ����Ű�°��� �� == ptr�� ����ִ� �� == i�� �ּҰ�*/
                                                                      /* dptr�� ����Ű�°��� ������ ����Ű�� �� == i�� ����ִ� ��*/

    *ptr = 7777; /* changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");                     // ptr�� ����Ű�� ���� 7777�� �ٲ۴�. 
    printf("value of i == %d\n", i);                        // ptr�� i�� ����Ű�Ƿ� i�� ���� 7777�� �ٲ�
    printf("value of *ptr == %d\n", *ptr);                  // *ptr�� i�� ���� ��Ÿ����.
    printf("value of **dptr == %d\n", **dptr);              // ** dptr�� ���������ͷ� i�� ���� ��Ÿ����.

    **dptr = 8888; /* changing the value of **dptr */

    printf("\n[after **dptr = 8888] \n");                   // *ptr = 7777�� ������ ������� i�� ���� �ٲ��
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    return 0;
}