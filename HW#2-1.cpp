#include <stdio.h>

int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("[----- [������] [2019038015] -----]\n\n");

                                                                // %ld�� ��ȣ�� �ִ� 10���� ������ ���
    printf("Size of char: %ld byte\n",sizeof(charType));        //�ڷ����� char�� ������ ����Ʈ ����� Ȯ���Ѵ�.   size of byte is 1
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //�ڷ����� int�� ������ ����Ʈ ����� Ȯ���Ѵ�.    size of byte is 4
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //�ڷ����� float�� ������ ����Ʈ ����� Ȯ���Ѵ�.  size of byte is 4
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //�ڷ����� double�� ������ ����Ʈ ����� Ȯ���Ѵ�. size of byte is 8
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));            //�ڷ����� char�� ����Ʈ ����� Ȯ���Ѵ�.    size of byte is 1
    printf("Size of int: %ld bytes\n",sizeof(int));             //�ڷ����� int�� ����Ʈ ����� Ȯ���Ѵ�.     size of byte is 4
    printf("Size of float: %ld bytes\n",sizeof(float));         //�ڷ����� float�� ����Ʈ ����� Ȯ���Ѵ�.   size of byte is 4
    printf("Size of double: %ld bytes\n",sizeof(double));       //�ڷ����� double�� ����Ʈ ����� Ȯ���Ѵ�.  size of byte is 8
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));          //�ڷ����� char pointer�� ����Ʈ ����� Ȯ���Ѵ�.     size of byte is 1
    printf("Size of int*: %ld bytes\n",sizeof(int*));           //�ڷ����� int pointer�� ����Ʈ ����� Ȯ���Ѵ�.      size of byte is 1
    printf("Size of float*: %ld bytes\n",sizeof(float*));       //�ڷ����� float pointer�� ����Ʈ ����� Ȯ���Ѵ�.    size of byte is 1
    printf("Size of double*: %ld bytes\n",sizeof(double*));     //�ڷ����� double pointer�� ����Ʈ ����� Ȯ���Ѵ�.   size of byte is 1

    return 0;
}