#include <stdio.h>

void thing(int *x,int *y,int *sum,char o){
        switch (o){
                case '+':
                        *sum = *x + *y;
                        break;
                case '-':
                        *sum = *x - *y;
                        break;
                case '/':
                        *sum = *x / *y;
                        break;
                case '*':
                        *sum = *x * *y;
                        break;
                default:
                        printf("Invaild operator\n");
                        break;
        }
}

int main(void){
        int x;
        int y;
        char o;
        int sum;

        printf("Enter x:");
        scanf(" %i",&x);
        printf("Enter y:");
        scanf(" %i",&y);
        printf("Enter operation:");
        scanf(" %c",&o);

        thing(&x,&y,&sum,o);
        printf("%d %c %d = %d",x,o,y,sum);


}
