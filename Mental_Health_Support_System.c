#include <stdio.h>
#include <string.h>


struct Patient {
    char name[50];
    int age;
    char gender[10];
    char problem[100];
};

void suggestPsychologist(char problem[]) {
    printf("\nSuggested Psychologist:\n");

    if (strstr(problem, "depression") || strstr(problem, "anxiety")) {
        printf("Name    : Dr. Anika Rahman\n");
        printf("Specialty: Depression & Anxiety\n");
        printf("Phone   : 01711112222\n");
        printf("Address : Green Life Hospital, Dhaka\n");
    } else if (strstr(problem, "stress") || strstr(problem, "relationship")) {
        printf("Name    : Dr. Tanvir Hasan\n");
        printf("Specialty: Stress & Relationship Issues\n");
        printf("Phone   : 01833334444\n");
        printf("Address : Square Hospital, Dhaka\n");
    } else if (strstr(problem, "anger") || strstr(problem, "ptsd")) {
        printf("Name    : Dr. Nabila Chowdhury\n");
        printf("Specialty: Anger Management & PTSD\n");
        printf("Phone   : 01655556666\n");
        printf("Address : United Hospital, Dhaka\n");
    } else {
        printf("No specific match found. Consult a general psychologist.\n");
    }
}

int main() {
    struct Patient pat;
    char again;

    do {
        printf("\n=== Mental Health Support System ===\n");


        printf("Enter your name: ");
        scanf(" %[^\n]", pat.name);

        printf("Enter your age: ");
        scanf("%d", &pat.age);

        printf("Enter your gender: ");
        scanf("%s", pat.gender);

        printf("Describe your problem (e.g., depression, stress): ");
        scanf(" %[^\n]", pat.problem);


        printf("\n--- Patient Info ---\n");
        printf("Name   : %s\n", pat.name);
        printf("Age    : %d\n", pat.age);
        printf("Gender : %s\n", pat.gender);
        printf("Problem: %s\n", pat.problem);


        suggestPsychologist(pat.problem);


        printf("\nDo you want to enter another patient? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("\nThank you for using the system!\n");
    return 0;
}
