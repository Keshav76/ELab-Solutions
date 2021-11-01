#include <stdio.h>
int main()
{
    int LEN = 9;
    char var[3][LEN];
    char inp[3][LEN];
    
    float m,d;
    
    scanf("%c%c%f",&var[0][0],&var[1][0],&m);
    scanf("%c%c%f",&inp[0][0],&inp[1][0],&d);
    
    printf("x %.2f",m/(-d));
    
    return 0;
}
