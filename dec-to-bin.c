#include<stdio.h>
#include<math.h>
long long dectobin(n);
int main()
{
    int n;//input which is to convert
    scanf("%d",&n);
    printf("%lld",dectobin(n));
    return 0;
}
long long dectobin(n)
{
    long long binaryNumber=0;
    int rem,i=1;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        binaryNumber=binaryNumber+rem*i;
        i*=10;
    }
    return binaryNumber;
}