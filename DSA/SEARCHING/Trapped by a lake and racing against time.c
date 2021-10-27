#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char name[50];
    scanf("%s", name);
    
    int ramp;
    scanf("%d",&ramp);
    
    float a,width;
    scanf("%f",&a);
    scanf("%f",&width);
    
    float speed1 = sqrt(2*a*ramp);
    float distance=speed1*speed1/9.805;
    
    if (distance <= (width-5.0))
     printf("%s will reach a speed of %0.2f m/s on a %d ramp crossing %0.1f of %.1f meters, SPLASH!", name, speed1, ramp, distance, width);
    
    else if ((distance >= (width-5.0)) && (distance <= width))
     printf("%s will reach a speed of %0.2f m/s on a %d ramp crossing %0.1f of %.1f meters, JOVA MADE IT!", name, speed1, ramp, distance, width);
    
    else printf("%s will reach a speed of %0.2f m/s on a %d ramp crossing %0.1f of %.1f meters, LIKE A LEGEND!", name, speed1, ramp, distance, width);

	return 0;
}
