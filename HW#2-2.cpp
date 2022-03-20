#include <stdio.h>

int main()
{
    int i;
    int *ptr;
    int **dptr;
    i = 1234;

    printf("[----- [이정인] [2019038015] -----]\n\n");

    printf("[checking values before ptr = &i] \n");         // 아직 포인터를 사용하지 않았을 때
    printf("value of i == %d\n", i);                        // 변수 i에 있는 값을 출력한다.
    printf("address of i == %p\n", &i);                     // 변수 i의 주소값을 출력한다.
    printf("value of ptr == %p\n", ptr);                    // 변수 ptr의 값을 출력한다. (+아직 ptr에 변수 i의 주소값을 넣지 않았으므로 
                                                            //                             ptr은 i를 포인터 하지않는다.)
    printf("address of ptr == %p\n", &ptr);                 // 변수 ptr이 가지고 있는 주소값을 출력한다.

    ptr = &i; /* ptr is now holding the address of i */     

    printf("\n[checking values after ptr = &i] \n");        // 여기 이후로 ptr은 i의 주소값을 갖게 된다.
    printf("value of i == %d\n", i);                        // 변수 i의 값을 출력한다.
    printf("address of i == %p\n", &i);                     // 변수 i의 주소값을 출력한다.
    printf("value of ptr == %p\n", ptr);                    // ptr의 값을 출력한다. (+이때부터 ptr은 변수 i를 가르킨다.)
    printf("address of ptr == %p\n", &ptr);                 // ptr의 주소값은 ptr의 변수에 들어있는 값과는 다르므로 
                                                            // 포인터를 하기 전과 동일하다.
    printf("value of *ptr == %d\n", *ptr);                  // ptr이 변수 i를 가리키고 있으므로 *ptr는 i의 값을 출력한다.

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");     // dptr에는 ptr 주소값 넣기
    printf("value of i == %d\n", i);                        // 변수 i의 값을 출력한다.
    printf("address of i == %p\n", &i);                     // 변수 i의 주소값을 출력한다.
    printf("value of ptr == %p\n", ptr);                    // ptr의 값을 출력한다. (+이때부터 ptr은 변수 i를 가르킨다.)
    printf("address of ptr == %p\n", &ptr);                 // ptr의 주소값은 ptr의 변수에 들어있는 값과는 다르므로 
                                                            // 포인터를 하기 전과 동일하다
    printf("value of *ptr == %d\n", *ptr);                  // ptr이 변수 i를 가리키고 있으므로 *ptr는 i의 값을 출력한다.
    printf("value of dptr == %p\n", dptr);                  // dptr = &ptr이므로 dptr은 ptr의 주소값을 가지고 있다.(==dptr은 ptr를 가르키고 있다.)
    printf("address of dptr == %p\n", &dptr);               // 하지만 dptr은 고유의 주소값을 가지고 있다.
    printf("value of *dptr == %p\n", *dptr);                // *dptr은 dptr이 가지고 있는 가르키는 곳의 값을 출력한다.
                                                            //        /* dptr이 가르키는곳 == ptr
                                                                      /* dptr이 가르키는곳의 값 == ptr에 들어있는 값 == i의 주소값*/
    printf("value of **dptr == %d\n", **dptr);              // **dptr은 dptr이 가르키는 값에서 또 가르키는 값의 값을 출력한다.
                                                            //        /* dptr이 가르키는곳 == ptr
                                                                      /* dptr이 가르키는곳의 값 == ptr에 들어있는 값 == i의 주소값*/
                                                                      /* dptr이 가르키는곳의 값에서 가르키는 값 == i에 들어있는 값*/

    *ptr = 7777; /* changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");                     // ptr가 가르키는 값을 7777로 바꾼다. 
    printf("value of i == %d\n", i);                        // ptr은 i를 가르키므로 i의 값이 7777로 바뀜
    printf("value of *ptr == %d\n", *ptr);                  // *ptr은 i의 값을 나타낸다.
    printf("value of **dptr == %d\n", **dptr);              // ** dptr은 이중포인터로 i의 값을 나타낸다.

    **dptr = 8888; /* changing the value of **dptr */

    printf("\n[after **dptr = 8888] \n");                   // *ptr = 7777과 동일한 방법으로 i의 값이 바뀐다
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    return 0;
}