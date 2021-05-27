#include<stdio.h>
// counting the  bits
int count(unsigned int value)
{
    int result = 0;

    while(value)
    {
        value &= (value - 1);
        ++result;
    }

    return result;
}
int main()
{
    struct mybits {
        unsigned int one:14;
    };

    struct mybits test;
    // set a bit to 1 for all
    test.one= ~0;
    printf("%d\n",test.one);
    printf("count=%d\n",count(test.one));
}