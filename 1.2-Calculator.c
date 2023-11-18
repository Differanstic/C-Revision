#include<stdio.h>
void main(){

    printf("Basic Calculator Program\n\n");

    double a,b;
    char operator;

    do{
        printf("> ");
        scanf("%lf%c%lf",&a,&operator,&b);

        switch (operator)
        {
        case '+':
            printf("%.2lf\n",a+b);
            break;
        
        case '-':
            printf("%.2lf\n",a-b);
            break;

        case '*':
            printf("%.2lf\n",a*b);
            break;
        
        case '/':
            printf("%.2lf\n",a/b);
            break;
        
        default:
            operator = '!';
            break;
        }

    }while(operator != '!');

}