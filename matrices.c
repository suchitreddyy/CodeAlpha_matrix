#include<stdio.h>

void add(int a[][10], int b[][10], int r, int c);
void multi(int a[][10], int b[][10], int r, int c);
void transpose(int a[][10], int r, int c);

int main() {

    int a[10][10], b[10][10];
    int i, j, r, c, ch;

    printf("Enter rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter 1st matrix elements:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2nd matrix elements:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    do {

        printf("Enter your Choice\n1.Addition\n2.Multiplication\n3.Transpose\n4.Exit\n");
        scanf("%d", &ch);

        switch(ch) {

            case 1:
                add(a, b, r, c);
                break;

            case 2:
                multi(a, b, r, c);
                break;

            case 3:
                transpose(a, r, c);
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(ch != 4);

    return 0;
}

void add(int a[][10], int b[][10], int r, int c) {

    int sum[10][10];
    int i, j;

    printf("\nAddition Matrix:\n");

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {

            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }

        printf("\n");
    }
}

void multi(int a[][10], int b[][10], int r, int c) {

    int mul[10][10];
    int i, j, k;

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {

            mul[i][j] = 0;

            for(k=0; k<c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMultiplication Matrix:\n");

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("%d\t", mul[i][j]);
        }

        printf("\n");
    }
}

void transpose(int a[][10], int r, int c) {

    int trans[10][10];
    int i, j;

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            trans[j][i] = a[i][j];
        }
    }

    printf("\nTranspose Matrix:\n");

    for(i=0; i<c; i++) {
        for(j=0; j<r; j++) {
            printf("%d\t", trans[i][j]);
        }

        printf("\n");
    }
}