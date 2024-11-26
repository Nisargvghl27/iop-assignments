//WRITE A  C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE  A STRUCTURE POINTER AND AN 
//ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY. 
#include <stdio.h>

struct Employee {
    int empNumber;
    char empName[50];
    float basicPay;
};

int main() {
    struct Employee employ[50];
    struct Employee *ptr;
    int n, i;

    printf("Enter the number of employees (up to 50): ");
    scanf("%d", &n);

    if(n>50 || n<=0){
        printf("Invalid number of employees. Please enter a value between 1 and 50.\n");
        return 1;
    }

    ptr=employ;

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &ptr[i].empNumber);
        printf("Employee Name: ");
        scanf(" %[^\n]",ptr[i].empName); // To allow spaces in the name
        printf("Basic Pay: ");
        scanf("%f", &ptr[i].basicPay);
    }

    printf("\nEmployee Details:\n");
    printf("-------------------------------------------------\n");
    printf("Emp Number\tEmp Name\t\tBasic Pay\n");
    printf("-------------------------------------------------\n");
    for (i=0;i<n;i++) {
        printf("%d\t\t%-20s\t%.2f\n", ptr[i].empNumber, ptr[i].empName, ptr[i].basicPay);
    }
    return 0;
}