#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d integers: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Child process: Printing the contents of the array\n");
        for(i=0; i<n; i++) {
            printf("%d ", a[i]);
        }
    } else {
        // Parent process
        wait(NULL);
        printf("\nParent process: Child has finished printing the array. Exiting...\n");
    }
     return 0;
}
