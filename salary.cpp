#include <stdio.h>
#include <string.h>

// Define a structure to hold user details
struct Person {
    char fullName[100];
    int age;
    float salary;
};

int main() {
    struct Person user; // Create a Person object

    // Prompt user for input
    printf("Enter your full name: ");
    fgets(user.fullName, sizeof(user.fullName), stdin);
    user.fullName[strcspn(user.fullName, "\n")] = '\0'; // Remove newline character

    printf("Enter your age: ");
    scanf("%d", &user.age);

    printf("Enter your salary: ");
    scanf("%f", &user.salary);

    // Display the entered details
    printf("\n--- User Details ---\n");
    printf("Full Name: %s\n", user.fullName);
    printf("Age: %d\n", user.age);
    printf("Salary: %.2f\n", user.salary);

    return 0;
}