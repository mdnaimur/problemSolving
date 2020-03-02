int GCD( int a, int b )

{
    int temp;
    if( a < b ) temp=b;{
    while( a % b != 0 ) {
        temp = a;
        a = b;
        b = temp % b;
    }
    temp=b;
    }
    printf("%d",temp);
    return b;
}
