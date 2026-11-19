#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    float angle, temp, torque;
    char status[20];

    fp = fopen("robot.txt", "a");

    printf("Enter number of records: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nRecord %d:\n", i + 1);
        printf("Joint Angle: ");
        scanf("%f", &angle);
        printf("Motor Temperature: ");
        scanf("%f", &temp);
        printf("Torque Value: ");
        scanf("%f", &torque);
        printf("Operational Status: ");
        scanf("%s", status);

        fprintf(fp, "%f %f %f %s\n", angle, temp, torque, status);
    }
    fclose(fp);

    fp = fopen("robot.txt", "r");

    printf("\n--- Historical Records Analysis ---\n");
    while (fscanf(fp, "%f %f %f %s", &angle, &temp, &torque, status) != EOF) {
        printf("Angle: %.2f | Temp: %.2f | Torque: %.2f | Status: %s", 
               angle, temp, torque, status);

        if (temp > 75 && torque > 120) {
            printf(" -> Potential Mechanical Failure!\n");
        } else if (temp > 75) {
            printf(" -> Abnormal Motor Temperature!\n");
        } else if (torque > 120) {
            printf(" -> Excessive Torque!\n");
        } else {
            printf(" -> Normal\n");
        }
    }
    fclose(fp);

    return 0;
}
