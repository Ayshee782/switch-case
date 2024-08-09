#include<stdio.h>
int main()
{
    int day ;

    printf("%d enter day= ");
    scanf("%d",& day);
    switch(day){
        case 1: {
        printf("friday\n");
        break;
        }
        case 2:
            {
                printf("saturday\n");
                break;
            }
        case 3:
            {
                printf("sunday\n");
                break;

            }
        case 4 :
            {
                printf("monday\n");
                break;
            }
        case 5 :
            {
                printf("tusday\n");
                break;
            }
        case 6:
            {
                printf("wednesday\n");
                break;
            }
        case 7:
            {
                printf("thursday\n");
                break;
            }
        default:
            {
                printf("not exist!");
            }

    }
    return 0;


}
