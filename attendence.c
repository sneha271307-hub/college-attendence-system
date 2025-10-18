#include <stdio.h>

int main() {
    int marks_attendence;
    int total_attendence = 0;
    int num;
    int choices;

    printf("==== College Attendance System ====\n");
    printf("1. Add Student\n");
    printf("2. Mark Attendance\n");
    printf("3. View Total Attendance\n");
    printf("4. math_attendence\n");
    printf("5. labs_attendence\n");
    printf("6. codemantra_attendence\n");
    printf("7. Exit\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choices);

        switch (choices) {
        case 1: {
            char name[50];
            printf("Enter student number: ");
            scanf("%d", &num);

            printf("Enter student name: ");
            scanf("%s", name);

            printf("Student details added successfully!\n");
            break;
        }

        case 2: {
            int attendance[10];
            total_attendence = 0; // reset before marking new attendance
            for (int i = 0; i < 10; i++) {
                printf("Enter attendance for day %d (1=Present, 0=Absent): ", i + 1);
                scanf("%d", &marks_attendence);
                attendance[i] = marks_attendence;

                if (marks_attendence == 1) {
                    printf("Present\n");
                    total_attendence++;
                } else {
                    printf("Absent\n");
                }
            }
            printf("Attendance marked successfully!\n");
            break; // 
        }

        case 3: {
            float percentage = (total_attendence / 10.0) * 100;
            printf("Total Present Days = %d / 10\n", total_attendence);
            printf("Attendance Percentage = %.2f%%\n", percentage);
            break;
        }

        case 4: {
    int math_attendence[10];
    total_attendence = 0;
    int atten;
    int i = 0;

    do {
        printf("Enter attendance for Maths:\n");
        printf("Enter attendance for day %d (1=Present, 0=Absent): ", i + 1);
        scanf("%d", &atten);

        math_attendence[i] = atten;

        if (math_attendence[i] == 1) {
            printf("Present\n");
            total_attendence++;
        } else {
            printf("Absent\n");
        }

        i++;

    } while (i < 10);  

    printf("Attendance marked successfully!\n");

    float percentage = (total_attendence / 10.0) * 100;
    printf("Total Present Days = %d / 10\n", total_attendence);
    printf("Attendance Percentage = %.2f%%\n", percentage);
    printf("This is the total attendance for your Maths class.\n");

    break;
}
case 5: {
    int labs_attendence[10];
    total_attendence = 0;
    int lab;
    int i = 0;

    do {
        printf("Enter attendance for labs:\n");
        printf("Enter attendance for day %d (1=Present, 0=Absent): ", i + 1);
        scanf("%d", &lab);

        labs_attendence[i] = lab;

        if (labs_attendence[i] == 1) {
            printf("Present\n");
            total_attendence++;
        } else {
            printf("Absent\n");
        }

        i++;

    } while (i < 10);   

    printf("Attendance marked successfully!\n");

    float percentage = (total_attendence / 10.0) * 100;
    printf("Total Present Days = %d / 10\n", total_attendence);
    printf("Attendance Percentage = %.2f%%\n", percentage);
    printf("This is the total attendance for your labs class.\n");

    break;
}

case 6: {
    int codemantra_attendence[10];
    total_attendence = 0;
    int code;
    int i = 0;

    do {
        printf("Enter attendance for codemantra:\n");
        printf("Enter attendance for day %d (1=Present, 0=Absent): ", i + 1);
        scanf("%d", &code);

        codemantra_attendence[i] = code;

        if (codemantra_attendence[i] == 1) {
            printf("Present\n");
            total_attendence++;
        } else {
            printf("Absent\n");
        }

        i++;

    } while (i < 10);   
    printf("Attendance marked successfully!\n");

    float percentage = (total_attendence / 10.0) * 100;
    printf("Total Present Days = %d / 10\n", total_attendence);
    printf("Attendance Percentage = %.2f%%\n", percentage);
    printf("This is the total attendance for your codemantra class.\n");

    break;
}


        case 7:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice. Try again.\n");
            break;
        }

    } while (choices != 7);

    return 0;
}
