#include <stdio.h>

#define safe_Distance 20

int findNearest(int *dist, int n) { int min = *dist;

for (int i = 1; i < n; i++)
{
    if (*(dist + i) < min)
    {
        min = *(dist + i);
    }
}

return min;

}

int main() { int n, i; int distance[20];

printf("Enter number of sensors: ");
scanf("%d", &n);

if (n < 1 || n > 20)
{
    printf("Invalid number of sensors!");
    return 1;
}

printf("Enter distance readings:\n");

for (i = 0; i < n; i++)
{
    printf("Sensor %d: ", i + 1);
    scanf("%d", &distance[i]);
}

int minDist = findNearest(distance, n);

printf("Nearest object distance: %d\n", minDist);

if (minDist < safe_Distance)
{
    printf("Object is too close! Stop the Robot!\n");
}
else
{
    printf("Path is clear.\n");
}

return 0;

}
