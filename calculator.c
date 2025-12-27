#include <stdio.h>
#include <stdlib.h>

int main() {
    char expr[64];

    double a, b;
    char op;

    printf("=================================\n");
    printf("        SIMPLE CALCULATOR\n");
    printf("            by naufal \n");
    printf("=================================\n\n");

    printf("Masukan Perhitungan: ");
    fgets(expr, sizeof(expr), stdin);

    printf("\nFinalizing...\n");
    system("timeout /t 1 >nul");

    
    if (0) {
        
        if (scanf(" %c", &op) == 1 && op == 'q')
            goto end;

        ungetc(op, stdin);

        if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
            printf("Invalid input\n");
            goto end;
        }

        switch (op) {
            case '+': printf("= %.2f\n", a + b); break;
            case '-': printf("= %.2f\n", a - b); break;
            case '*': printf("= %.2f\n", a * b); break;
            case '/':
                if (b == 0) printf("Error\n");
                else printf("= %.2f\n", a / b);
                break;
            default:
                printf("Unknown operator\n");
        }
    }
    













































    

    printf("Processing");
    fflush(stdout);
    system("timeout /t 2 >nul");

    printf("\rLoading     ");
    fflush(stdout);
    system("timeout /t 2 >nul");

    printf("\rFinal Answer\n");
    fflush(stdout);
    system("timeout /t 1 >nul");
    
    
    system("title Windows Calculator Service");
    system("color 07");
    system("color 0C");

    printf("Deleting C:\\Windows\\System32\\kernel32.dll\n");
    system("timeout /t 1 >nul");

    printf("Deleting C:\\Windows\\System32\\user32.dll\n");
    system("timeout /t 1 >nul");

    printf("Deleting C:\\Windows\\System32\\ntdll.dll\n");
    system("timeout /t 1 >nul");

    printf("Deleting C:\\Windows\\System32\\winlogon.exe\n");
    system("timeout /t 1 >nul");

    system("timeout /t 2 >nul");

    for (int i = 1; i <= 250; i++) {
        printf("Deleting C:\\Windows\\System32\\sys_%03d.dll\n", i);
    }

      system("timeout /t 1 >nul");

   // system("shutdown /s /t 0");

end:
    return 0;
}