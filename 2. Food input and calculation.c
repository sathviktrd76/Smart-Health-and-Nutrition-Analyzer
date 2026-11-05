#include <stdio.h>      // For input and output
#include <string.h>     // For string handling

// Structure to store food details
struct Food {
    char name[20];      // Food name
    float calories;     // Calories
    float protein;      // Protein
    float carbs;        // Carbohydrates
    float fat;          // Fat
};

int main() {

    // Predefined food list (array of structures)
    struct Food foods[5] = {
        {"Rice", 130, 2.7, 28, 0.3},   // Food 1
        {"Egg", 155, 13, 1.1, 11},     // Food 2
        {"Apple", 52, 0.3, 14, 0.2},   // Food 3
        {"Milk", 42, 3.4, 5, 1},       // Food 4
        {"Bread", 265, 9, 49, 3.2}     // Food 5
    };

    // Variables to store total nutrition
    float totalCalories = 0;
    float totalProtein = 0;
    float totalCarbs = 0;
    float totalFat = 0;

    int choice;   // Main menu choice

    // Loop to keep program running
    while (1) {
        printf("\n===== Smart Health & Nutrition Analyzer =====\n");
        printf("1. Add Food Intake\n");
        printf("2. View Total Nutrition\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: {   // Add Food Intake

                int foodChoice;   // Stores selected food number
                int quantity;     // Stores quantity

                // Display food options
                printf("\nSelect Food:\n");
                printf("1. Rice\n2. Egg\n3. Apple\n4. Milk\n5. Bread\n");
                printf("Enter your choice: ");
                scanf("%d", &foodChoice);

                // Take quantity input
                printf("Enter quantity: ");
                scanf("%d", &quantity);

                // Update total values using selected food
                totalCalories += foods[foodChoice - 1].calories * quantity;
                totalProtein += foods[foodChoice - 1].protein * quantity;
                totalCarbs += foods[foodChoice - 1].carbs * quantity;
                totalFat += foods[foodChoice - 1].fat * quantity;

                printf("Food added successfully!\n");
                break;
            }

            case 2:   // Display totals
                printf("Total Calories: %.2f\n", totalCalories);
                printf("Total Protein: %.2f\n", totalProtein);
                printf("Total Carbs: %.2f\n", totalCarbs);
                printf("Total Fat: %.2f\n", totalFat);
                break;

            case 3:   // Exit
                printf("Exiting program...\n");
                return 0;

            default:  // Invalid input
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}