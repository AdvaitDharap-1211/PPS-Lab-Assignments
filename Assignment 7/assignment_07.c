#include <stdio.h>

int main() {
    int n, i;
    int id[50];
    char type[50][30];
    float capacity[50], load[50], time[50], utilization[50];

    printf("Enter number of robotic arms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Robot %d:\n", i + 1);
        
        printf("Robot ID: ");
        scanf("%d", &id[i]);
        
        printf("Robot Type: ");
        scanf("%s", type[i]);
        
        printf("Payload Capacity: ");
        scanf("%f", &capacity[i]);
        
        printf("Actual Load: ");
        scanf("%f", &load[i]);
        
        printf("Operating Time: ");
        scanf("%f", &time[i]);

        utilization[i] = (load[i] / capacity[i]) * 100;
    }

    printf("\n--- Robot Report ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d | Type: %s | Time: %.2f | Utilization: %.2f%%", 
               id[i], type[i], time[i], utilization[i]);
               
        if (load[i] > capacity[i]) {
            printf(" | Status: Beyond Rated Payload\n");
        } else {
            printf(" | Status: Within Limit\n");
        }
    }

    return 0;
}
