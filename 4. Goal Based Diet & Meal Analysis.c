#include <stdio.h>   // For input and output functions (printf, scanf)
#include <string.h>  // For string handling (not heavily used here but included)

// Define a structure to store food details
struct Food {
    char name[20];   // Stores food name (string)
    float calories;  // Stores calories
    float protein;   // Stores protein
    float carbs;     // Stores carbohydrates
    float fat;       // Stores fat
};

int main() {

    // Array of structures storing 5 food items
    struct Food foods[5] = {
        {"Rice", 130, 2.7, 28, 0.3},
        {"Egg", 155, 13, 1.1, 11},
        {"Apple", 52, 0.3, 14, 0.2},
        {"Milk", 42, 3.4, 5, 1},
        {"Bread", 265, 9, 49, 3.2}
    };

    // Variables to store total nutrition
    float totalCalories = 0;
    float totalProtein = 0;
    float totalCarbs = 0;
    float totalFat = 0;

    int choice;  // Stores user menu choice

    // Infinite loop to keep program running
    while (1) {

        // Display menu
        printf("\n===== Smart Health & Nutrition Analyzer =====\n");
        printf("1. Add Food Intake\n");
        printf("2. View Total Nutrition\n");
        printf("3. Diet & Meal Analysis\n");
        printf("4. Exit\n");

        // Take user input
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform action based on user choice
        switch (choice) {

            // CASE 1: Add food intake
            case 1: {
                int foodChoice, quantity;

                // Display food list
                printf("\nSelect Food:\n");
                printf("1. Rice\n2. Egg\n3. Apple\n4. Milk\n5. Bread\n");

                printf("Enter your choice: ");
                scanf("%d", &foodChoice);

                // Ask for quantity
                printf("Enter quantity: ");
                scanf("%d", &quantity);

                // Calculate and add nutrition to totals
                totalCalories += foods[foodChoice - 1].calories * quantity;
                totalProtein  += foods[foodChoice - 1].protein  * quantity;
                totalCarbs    += foods[foodChoice - 1].carbs    * quantity;
                totalFat      += foods[foodChoice - 1].fat      * quantity;

                printf("Food added successfully!\n");
                break;
            }

            // CASE 2: View total nutrition
            case 2:
                printf("\n===== DAILY NUTRITION REPORT =====\n");

                // Display totals
                printf("Total Calories : %.2f kcal\n", totalCalories);
                printf("Total Protein  : %.2f g\n", totalProtein);
                printf("Total Carbs    : %.2f g\n", totalCarbs);
                printf("Total Fat      : %.2f g\n", totalFat);

                // Check calorie limit
                if (totalCalories > 2000) {
                    printf("Warning: You exceeded daily calorie limit!\n");
                } else {
                    printf("You are within calorie limit.\n");
                }
                break;

            // CASE 3: Diet & Meal Analysis
            case 3: {
                int goal, meal;

                // Ask user goal
                printf("\nSelect Your Goal:\n");
                printf("1. Weight Loss\n2. Muscle Gain\n3. Maintain Weight\n");
                scanf("%d", &goal);

                // Ask meal type
                printf("\nSelect Meal Type:\n");
                printf("1. Breakfast\n2. Lunch\n3. Dinner\n");
                scanf("%d", &meal);

                // Goal-based analysis
                if (goal == 1) {
                    if (totalCalories > 1800)
                        printf("Too many calories for weight loss!\n");
                    else
                        printf("Good diet for weight loss.\n");
                }
                else if (goal == 2) {
                    if (totalProtein < 50)
                        printf("Protein is low for muscle gain!\n");
                    else
                        printf("Good protein intake for muscle gain.\n");
                }
                else {
                    printf("Balanced diet for maintenance.\n");
                }

                // Meal-based suggestion
                if (meal == 3 && totalCalories > 700)
                    printf("Heavy dinner is not recommended!\n");
                else if (meal == 1)
                    printf("Good breakfast choice!\n");
                else
                    printf("Meal looks fine.\n");

                break;
            }

            // CASE 4: Exit program
            case 4:
                printf("Exiting program...\n");
                return 0;

            // Default case (invalid input)
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}