#include<stdio.h>
int main()
{
    char str[100];
    int count =0,i;
    printf("enter an expression\n");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(')
            count++;
        else if(str[i]==')')
            count --;
            if (count<0)
            {
                printf("Not Balanced");
                return 0;
            }
    }
    if (count ==0)
        printf("balanced");
    else 
        printf("not balanced");
}