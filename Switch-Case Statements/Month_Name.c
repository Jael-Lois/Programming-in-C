#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int n;
    
    printf("Enter a month number : ");
    scanf("%d", &n);
    
    switch(n)
    {
        case 1:
            printf("January");
            break;
            
        case 2:
            printf("February");
            break;
            
        case 3:
            printf("March");
            break;
            
        case 4:
            printf("April");
            break;
            
        case 5:
            printf("May");
            break;
            
        case 6:
            printf("June");
            break;
            
        case 7:
            printf("July");
            break;
            
        case 8:
            printf("August");
            break;
            
        case 9:
            printf("September");
            break;
            
        case 10:
            printf("October");
            break;
            
        case 11:
            printf("November");
            break;
            
        case 12:
            printf("December");
            break;
            
        default:
            printf("\nEnter the correct number. Month number varies from 1 to 12");
    }
    
    return 0;
}
