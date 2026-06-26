#include <stdio.h>
int main() {
    int answer, score = 0;   // 'answer' stores user's answer, 'score' stores total correct answers
    printf("===== Welcome to the Quiz Application =====\n");
    // ---------------- Question 1 ----------------
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    // Check if answer is correct
    if (answer == 2) {
        printf("Correct!\n");
        score++;   // Increase score if correct
    } else {
        printf("Wrong! Correct answer is Delhi.\n");
    }
    // ---------------- Question 2 ----------------
    printf("\n2. Which language is used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    // Check if answer is correct
    if (answer == 3) {
        printf("Correct!\n");
        score++;   // Increase score if correct
    } else {
        printf("Wrong! Correct answer is C.\n");
    }
    // ---------------- Question 3 ----------------
    printf("\n3. Who is known as the Father of Computer?\n");
    printf("1. Charles Babbage\n2. Alan Turing\n3. Newton\n4. Elon Musk\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    // Check if answer is correct
    if (answer == 1) {
        printf("Correct!\n");
        score++;   // Increase score if correct
    } else {
        printf("Wrong! Correct answer is Charles Babbage.\n");
    }
    // Display final score after all questions
    printf("\n===== Quiz Finished =====\n");
    printf("Your final score is: %d out of 3\n", score);
    return 0;
}