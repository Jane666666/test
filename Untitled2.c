#include<stdio.h>
main()
{
    double C,F;
    for(F=0;F>=0&&F<=300;F=F+10)
    {
        C=(double)5/9*(F-32);
        printf("%lf,%lf\n",C,F);
    }
    return 0;
}
