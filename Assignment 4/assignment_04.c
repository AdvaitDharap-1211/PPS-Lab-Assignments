 #include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int sensor1[r][c], sensor2[r][c], sensor3[r][c], sum[r][c];

    printf("Enter elements of sensor1:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++) {
            scanf("%d", &sensor1[i][j]);
        }
    }

    printf("Enter elements of sensor2:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++) {
            scanf("%d", &sensor2[i][j]);
        }
    }

    printf("Enter elements of sensor3:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++) {
            scanf("%d", &sensor3[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = sensor1[i][j] + sensor2[i][j] + sensor3[i][j];
        }
    }
[9:07 pm, 22/9/2026] Advait Dharap: printf("\nResultant Matrix:\n");
    for(i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
