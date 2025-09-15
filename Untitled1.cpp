#include<stdio.h>
#include<string.h>

int main() {
    char qualification[10];
    char result[10];
    printf("Enter your Qualification: ");
    scanf("%s", qualification);
    if (strcmp(qualification, "MS") == 0) {
        printf("Enter your Result: ");
        scanf("%s", result);
        if (strcmp(result, "Pass") == 0) {
            printf("Congratulations you are hired");
        }
        else{
            printf("Better luck next time");   
        }
        

    }
    else{
        printf("Not eligible");
    }
    return 0;
}
