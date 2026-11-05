#include <stdio.h>      // For input and output (printf, scanf)
#include <string.h>     // For string handling (used later)

// Structure to store food details
struct Food {
    char name[20];      // Stores food name (string)
    float calories;     // Stores calories
    float protein;      // Stores protein
    float carbs;        // Stores carbohydrates
    float fat;          // Stores fat
};

int main() {

    // Variables to store total nutrition (initially 0)
    float totalCalories = 0;
    float totalProtein = 0;
    float totalCarbs = 0;
    float totalFat = 0;

    int choice;   // Variable to store user menu choice

    // Infinite loop to keep program running
    while (1) {
        printf("\n===== Smart Health & Nutrition Analyzer =====\n");
        printf("1. Add Food Intake\n");
        printf("2. View Total Nutrition\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);   // Take input from user

        // Check user choice
        switch (choice) {

            case 1:
                // This feature will be added later
                printf("Add Food feature coming soon...\n");
                break;

            case 2:
                // Display total nutrition values
                printf("Total Calories: %.2f\n", totalCalories);
                printf("Total Protein: %.2f\n", totalProtein);
                printf("Total Carbs: %.2f\n", totalCarbs);
                printf("Total Fat: %.2f\n", totalFat);
                break;

            case 3:
                // Exit the program
                printf("Exiting program...\n");
                return 0;

            default:
                // If user enters invalid input
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}