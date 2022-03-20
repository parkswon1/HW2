#include <stdio.h>
int main()
{
    char charType; //char형 변수지정
    int integerType; //int형 변수지정
    float floatType; //float형 변수시정
    double doubleType; //double형 변수지정

    printf("[----- [ParkSeokWon] [2017018003] -----]\n");

    printf("Size of char: %ld byte\n",sizeof(charType)); //char형변수의 byte싸이즈 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //int형변수의 byte싸이즈 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //float형변수의 byte싸이즈 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double형변수의 byte싸이즈 출력
    
    printf("-----------------------------------------\n");
    
    printf("Size of char: %ld byte\n",sizeof(char)); //char의 byte싸이즈 출력
    printf("Size of int: %ld bytes\n",sizeof(int));  //int의 byte싸이즈 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); //float의 byte싸이즈 출력
    printf("Size of double: %ld bytes\n",sizeof(double)); //double의 byte싸이즈 출력
    
    printf("-----------------------------------------\n");
    
    printf("Size of char*: %ld byte\n",sizeof(char*)); //char형 포인터(저장되는 주소)의 byte싸이즈 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //int형 포인터(저장되는 주소)의 byte싸이즈 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float형 포인터(저장되는 주소)의 byte싸이즈 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double형 포인터(저장되는 주소)의 byte싸이즈 출력

    return 0;
}