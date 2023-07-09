#include <stdio.h>
#define MAX_STUDENTS 3
/* This struct defines the student data. */
struct Student {
  char name[100];
  int age;
  enum Score {
    A, B, C, D, F
  } score;
};
/* This function adds a student to the list. */
void addStudent(int c) {
  /* Check if the maximum number of students has been reached. */
  if (c >= MAX_STUDENTS) {
    printf("Maximum number of students reached.\n");
  } else {
    /* Get the student's name, age, and grade. */
    printf("Enter the student's name: ");
    scanf("%s\n", s[c].name);
    printf("Enter the student's age: ");
    scanf("%d\n", &s[c].age);
    /* Get the student's grade and set the score accordingly. */
    char grade;
    
    printf("Enter the student's grade (A, B, C, D, or F): ");
    scanf("%c\n", &grade);
    if (grade == 'A') {
      s[c].score = 0;
    } else if (grade == 'B') {
      s[c].score = 1;
    } else if (grade == 'C') {
      s[c].score = 2;
    } else if (grade == 'D') {
      s[c].score = 3;
    } else {
      s[c].score = 4;
    }
    /* Print a success message. */
    printf("Student added successfully.\n");
  }
}
/* This function displays the list of students. */
void displayStudents(int c) {
  /* Check if there are any students to display. */
  if (c == 0) {
    printf("No students to display.\n");
  } else {
    /* Print a header. */
    printf("List of students:\n");
    /* Iterate over the students and print their information. */
    for (int i = 0; i < c; i++) {
      printf("Student %d\n", i + 1);
      printf("Name: %s\n", s[i].name);
      printf("Age: %d\n", s[i].age);
      printf("Score: ");
      switch (s[i].score) {
        case 0:
          printf("A\n");
          break;
        case 1:
          printf("B\n");
          break;
        case 2:
          printf("C\n");
          break;
        case 3:
          printf("D\n");
          break;
        case 4:
          printf("F\n");
          break;
      }
      printf("\n");
    }
  }
}
/* This function finds the student with the highest score. */
void findHighestScore(int c) {
  /* Initialize the index of the highest-scoring student to 0. */
  int index = 0;
  /* Iterate over the students and find the one with the highest score. */
  for (int i = 1; i < c; i++) {
    if (s[i].score > s[index].score) {
      index = i;
    }
  }
  /* Print the information for the highest-scoring student. */
  printf("Highest-scoring student:\n");
  printf("Name: %s\n", s[index].name);
  printf("Age: %d\n", s[index].age);
  printf("Score: ");
  switch (s[index].score) {
    case 0:
      printf("A\n");
      break;
    case 1:
      printf("B\n");
      break;
    case 2:
      printf("C\n");
      break;
    case 3:
      printf("D\n");
      break;
    case 4:
      printf("F\n");
      break;
  }
  printf("\n”);
}
/* This is the main function. */
int main() {
  /* Initialize the student array. */
/* Start the main loop. */
int option;
int count = 0;
do {
  /* Get the user's choice. */
  printf("1. Add student\n2. Display students\n3. Find highest-scoring student\n4. Exit\n");
  scanf("%d", &option);
  /* Do the corresponding action. */
  switch (option) {
    case 1:
      addStudent(count);
      count++;
      break;
    case 2:
      displayStudents(count);
      break;
    case 3:
      findHighestScore(count);
      break;
    case 4:
      printf("Exiting the program. Thank you for using our system!\n");
      break;
    default:
      printf("Invalid option. Please try again.\n");
      break;
  }
} while (option != 4);
  return 0;
} 
