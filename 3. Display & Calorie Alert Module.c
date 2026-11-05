#include <stdio.h> // used to input/output functions (scanf() & printf())
#include <string.h> //used for string handling

// Structure to store food details
// Structure is a user-defined data type used to store different types of related data in a single unit 
struct Food {
    char name[20];
    float calories;
    float protein;
    float carbs;
    float fat;
};

int main() {

    // Predefined food items
    // Index starts from 0 ; foods[0] → first ; foods[4] → last
    struct Food foods[5] = {
        {"Rice", 130, 2.7, 28, 0.3},   //foods[0] → Food 1 (Rice)
        {"Egg", 155, 13, 1.1, 11},     //foods[1] → Food 2 (Egg)
        {"Apple", 52, 0.3, 14, 0.2},   //foods[2] → Food 3 (Apple)
        {"Milk", 42, 3.4, 5, 1},       //foods[3] → Food 4 (Milk)
        {"Bread", 265, 9, 49, 3.2}     //foods[4] → Food 5 (Bread)
    };     
                                          
    //char[20] stores a string and Handles longer food names (19 chars used for text and 1 char for '\0')
    // '\0' is used to keep going until it reaches end of string
    //struct Food foods[5] stores multiple food objects with multiple attributes

    // Total nutrition values
    float totalCalories = 0;         
    float totalProtein = 0;
    float totalCarbs = 0;
    float totalFat = 0;

    int choice;

    // Loop for menu
    while (1) {
        printf("\n===== Smart Health & Nutrition Analyzer =====\n");
        printf("1. Add Food Intake\n");
        printf("2. View Total Nutrition\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: {
                int foodChoice, quantity;

                printf("\nSelect Food:\n");
                printf("1. Rice\n2. Egg\n3. Apple\n4. Milk\n5. Bread\n");
                printf("Enter your choice: ");
                scanf("%d", &foodChoice);

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                // Update totals
                //The dot operator is used to access members (variables) inside a structure
                totalCalories += foods[foodChoice - 1].calories * quantity;
                totalProtein += foods[foodChoice - 1].protein * quantity;
                totalCarbs += foods[foodChoice - 1].carbs * quantity;
                totalFat += foods[foodChoice - 1].fat * quantity;

                printf("Food added successfully!\n");
                break;
            }

            case 2:
                // Improved display format
                printf("\n===== DAILY NUTRITION REPORT =====\n");
                printf("Total Calories : %.2f kcal\n", totalCalories);
                printf("Total Protein  : %.2f g\n", totalProtein);
                printf("Total Carbs    : %.2f g\n", totalCarbs);
                printf("Total Fat      : %.2f g\n", totalFat);

                // Calorie limit alert (NEW FEATURE)
                if (totalCalories > 2000) {
                    printf("Warning: You exceeded daily calorie limit!\n");
                } else {
                    printf("You are within calorie limit.\n");
                }
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}