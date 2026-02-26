#include <stdio.h>

int main() {
    int a,b;
    char op;
    printf("Enter two integers and an operator +, -, *, /, %% : ");
    scanf("%d %d %c", &a, &b, &op);
    if (op == '+') {
        printf("%d\n",a+b);
    }
    else if (op=='-') {
        printf("%d\n", a-b);
    }
    else if (op =='*') {
        printf("%d\n",a*b);
    }
    else if (op == '/') {
            printf("%d\n",a/b);
        }
    else if (op == '%')
        {
            printf("%d\n",a%b);
        }
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
