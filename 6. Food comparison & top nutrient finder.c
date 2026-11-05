#include <stdio.h>
#include <string.h>

// Structure for food
struct Food {
    char name[20];
    float calories;
    float protein;
    float carbs;
    float fat;
};

int main() {

    // Predefined foods
    struct Food foods[5] = {
        {"Rice", 130, 2.7, 28, 0.3},
        {"Egg", 155, 13, 1.1, 11},
        {"Apple", 52, 0.3, 14, 0.2},
        {"Milk", 42, 3.4, 5, 1},
        {"Bread", 265, 9, 49, 3.2}
    };

    // Total nutrition variables
    float totalCalories = 0;
    float totalProtein = 0;
    float totalCarbs = 0;
    float totalFat = 0;

    int choice;

    while (1) {
        printf("\n===== Smart Health & Nutrition Analyzer =====\n");
        printf("1. Add Food Intake\n");
        printf("2. View Total Nutrition\n");
        printf("3. Diet & Meal Analysis\n");
        printf("4. Diet Score & Deficiency Check\n");
        printf("5. Compare Foods\n");
        printf("6. Top Nutrient Finder\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            // ADD FOOD
            case 1: {
                int foodChoice, quantity;

                printf("\nSelect Food:\n");
                printf("1. Rice\n2. Egg\n3. Apple\n4. Milk\n5. Bread\n");
                scanf("%d", &foodChoice);

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                totalCalories += foods[foodChoice - 1].calories * quantity;
                totalProtein += foods[foodChoice - 1].protein * quantity;
                totalCarbs += foods[foodChoice - 1].carbs * quantity;
                totalFat += foods[foodChoice - 1].fat * quantity;

                printf("Food added successfully!\n");
                break;
            }

            // VIEW TOTAL
            case 2:
                printf("\n===== DAILY NUTRITION REPORT =====\n");
                printf("Calories : %.2f kcal\n", totalCalories);
                printf("Protein  : %.2f g\n", totalProtein);
                printf("Carbs    : %.2f g\n", totalCarbs);
                printf("Fat      : %.2f g\n", totalFat);

                if (totalCalories > 2000)
                    printf("Warning: High calorie intake\n");
                else
                    printf("Within calorie limit\n");
                break;

            // DIET & MEAL ANALYSIS (FULL LOGIC)
            case 3: {
                int goal, meal;

                printf("\nSelect Goal:\n");
                printf("1. Weight Loss\n2. Muscle Gain\n3. Maintain\n");
                scanf("%d", &goal);

                printf("\nSelect Meal Type:\n");
                printf("1. Breakfast\n2. Lunch\n3. Dinner\n");
                scanf("%d", &meal);

                if (goal == 1) {
                    if (totalCalories > 1800)
                        printf("Not suitable for weight loss\n");
                    else
                        printf("Good for weight loss\n");
                }
                else if (goal == 2) {
                    if (totalProtein < 50)
                        printf("Increase protein intake\n");
                    else
                        printf("Good for muscle gain\n");
                }
                else {
                    printf("Balanced diet for maintenance\n");
                }

                if (meal == 3 && totalCalories > 700)
                    printf("Heavy dinner not recommended\n");
                else if (meal == 1)
                    printf("Good breakfast choice\n");
                else
                    printf("Meal looks fine\n");

                break;
            }

            // DIET SCORE (FULL LOGIC)
            case 4: {
                int score = 100;

                if (totalCalories > 2200)
                    score -= 20;

                if (totalProtein < 50) {
                    score -= 30;
                    printf("Protein deficiency detected\n");
                }

                if (totalCarbs > 300) {
                    score -= 20;
                    printf("Excess carbs intake\n");
                }

                if (totalFat > 70) {
                    score -= 20;
                    printf("High fat consumption\n");
                }

                printf("\nYour Diet Score: %d/100\n", score);

                if (score >= 80)
                    printf("Excellent Diet\n");
                else if (score >= 50)
                    printf("Average Diet\n");
                else
                    printf("Poor Diet! Improve nutrition\n");

                break;
            }

            // FOOD COMPARISON
            case 5: {
                int f1, f2;

                printf("\nSelect first food (1-5): ");
                scanf("%d", &f1);

                printf("Select second food (1-5): ");
                scanf("%d", &f2);

                if (foods[f1 - 1].calories > foods[f2 - 1].calories)
                    printf("%s has more calories than %s\n", foods[f1 - 1].name, foods[f2 - 1].name);
                else
                    printf("%s has more calories than %s\n", foods[f2 - 1].name, foods[f1 - 1].name);

                if (foods[f1 - 1].protein > foods[f2 - 1].protein)
                    printf("%s has more protein than %s\n", foods[f1 - 1].name, foods[f2 - 1].name);
                else
                    printf("%s has more protein than %s\n", foods[f2 - 1].name, foods[f1 - 1].name);

                break;
            }

            // TOP NUTRIENT FINDER
            case 6: {
                int i;
                int maxProteinIndex = 0;
                int maxCarbIndex = 0;

                for (i = 1; i < 5; i++) {
                    if (foods[i].protein > foods[maxProteinIndex].protein)
                        maxProteinIndex = i;

                    if (foods[i].carbs > foods[maxCarbIndex].carbs)
                        maxCarbIndex = i;
                }

                printf("\nHighest protein food: %s\n", foods[maxProteinIndex].name);
                printf("Highest carb food: %s\n", foods[maxCarbIndex].name);

                break;
            }

            // EXIT
            case 7:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}