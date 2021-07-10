#include<stdio.h>

int main()
{
    char quali ,gender;
    int yos, salary = 0;
    printf("enter qualification ,yos, and gender");
    scanf("%c%d%c",&quali,&yos,&gender);
    if((gender == 'M')&&(yos>=10)&&(quali == 'pg'))
        salary = 15000;
    else if((gender == 'M'&&yos>=10&&quali == 'g')||(gender == 'M'&&yos<10&&quali == 'pg'))
        salary = 10000;
    else if((gender == 'M')&&(yos<10)&&(quali == 'g'))
        salary = 7000;
    else if ((gender == 'F')&&(yos>=10)&&(quali == 'pg'))
        salary = 12000;
    else if ((gender == 'F')&&(yos>=10)&&(quali == 'g'))
        salary = 9000;
    else if ((gender == 'F')&&(yos<10)&&(quali == 'pg'))
        salary = 10000;
    else if ((gender == 'F')&&(yos<10)&&(quali == 'g'))
        salary = 6000;
    printf("salary of employee=%d",salary);
    return 0;

}
