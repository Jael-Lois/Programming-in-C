#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int a, b, ans;
    char sym;
    
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);
    
    printf("\nEnter the arithmetic operator : ");
    scanf("\n %c", &sym);
    
    switch(sym)
    {
        case '+':
            ans = a+b;
            printf("\nThe answer is %d", ans);
            break;
            
        case '-':
            ans = a-b;
            printf("\nThe answer is %d", ans);
            break;
            
        case '*':
            ans = a*b;
            printf("\nThe answer is %d", ans);
            break;
            
        case '/':
            ans = a/b;
            printf("\nThe answer is %d", ans);
            break;
            
        case '%':
            ans = a%b;
            printf("\nThe answer is %d", ans);
            break;
            
        default:
            printf("\n Enter the correct symbol");
    }
    
    return 0;
}
