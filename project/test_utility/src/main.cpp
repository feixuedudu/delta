#include <stdio.h>
#include <iostream>

#include "test_nocopyable.h"
#include "test_singleton.h"

void test_nocopyable_func(int argc, char* argv[])
{
    test_nocopyable one;
    one.test();
    //test_nocopyable two = one;
    //two.test();

    getchar();
}

void test_singleton_func(int argc, char* argv[])
{
    get_test_singleton().test();

    getchar();
}

int main(int argc, char* argv[])
{
    int ch = '1';
    do{
        printf("the function list: \n");
        printf("0: exit \n");
        printf("1: test nocopyable \n");
        printf("2: test singleton \n");
        printf("please select your decide: ");
        ch = getchar();
        switch (ch) {
        case '0':
            printf("exit OK ~~\n");
            break;
        case '1':
            test_nocopyable_func(argc, argv);
            break;
        case '2':
            test_singleton_func(argc, argv);
            break;
        default:
            printf("please input right decide~~\n");
            break;
        }
    } while (ch != '0');

    getchar();
    return 0;
}
