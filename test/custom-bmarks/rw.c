// #include "util.h"
#include <stdio.h>
int test(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return test(n - 1) + test(n - 2);
    }
    return 0;
}
int main()
{
    // FILE *in, *out;
    // in = fopen("in.txt","r+");
    // out = fopen("out.txt","w+");
    // int m;
    // fscanf(in, "%d", &m);
    // // int n = 10;
    // int ret = test(m);
    // fprintf(out, "%d", ret);
    // printf("%d %d\n", m, ret);
    printf("Hello World\n");
    // return (ret == 55)? 0:-1;
    return 0;
}
