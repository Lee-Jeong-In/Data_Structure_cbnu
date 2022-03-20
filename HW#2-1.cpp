#include <stdio.h>

int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("[----- [이정인] [2019038015] -----]\n\n");

                                                                // %ld는 부호가 있는 10진수 정수를 출력
    printf("Size of char: %ld byte\n",sizeof(charType));        //자료형이 char인 변수의 바이트 사이즈를 확인한다.   size of byte is 1
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //자료형이 int인 변수의 바이트 사이즈를 확인한다.    size of byte is 4
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //자료형이 float인 변수의 바이트 사이즈를 확인한다.  size of byte is 4
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //자료형이 double인 변수의 바이트 사이즈를 확인한다. size of byte is 8
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));            //자료형이 char의 바이트 사이즈를 확인한다.    size of byte is 1
    printf("Size of int: %ld bytes\n",sizeof(int));             //자료형이 int의 바이트 사이즈를 확인한다.     size of byte is 4
    printf("Size of float: %ld bytes\n",sizeof(float));         //자료형이 float의 바이트 사이즈를 확인한다.   size of byte is 4
    printf("Size of double: %ld bytes\n",sizeof(double));       //자료형이 double의 바이트 사이즈를 확인한다.  size of byte is 8
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));          //자료형이 char pointer의 바이트 사이즈를 확인한다.     size of byte is 1
    printf("Size of int*: %ld bytes\n",sizeof(int*));           //자료형이 int pointer의 바이트 사이즈를 확인한다.      size of byte is 1
    printf("Size of float*: %ld bytes\n",sizeof(float*));       //자료형이 float pointer의 바이트 사이즈를 확인한다.    size of byte is 1
    printf("Size of double*: %ld bytes\n",sizeof(double*));     //자료형이 double pointer의 바이트 사이즈를 확인한다.   size of byte is 1

    return 0;
}