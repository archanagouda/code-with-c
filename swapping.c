//using bitwise operators
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("x=%d\ny=%d\n",x,y);//x=7,y=2
    //using xor
    x=x^y;//7=111,2=010,7^2=101=5
    y=x^y;//x=5 and y=2 5^2=101^010=111=7
    x=x^y;//x=5 &y=7 5^7=101^111=010=2
    printf("x=%d\ny=%d\n",x,y);//after swapping x=2,y=7
    return 0;
}