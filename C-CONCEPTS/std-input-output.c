#include<stdio.h>
#include<stdlib.h>
int demonstrate_getchar();
int demonstrate_putchar();
int demonstrate_fputs();
int demonstrate_fgets();
int main(){
    printf("Enter your name: ");
    char name[100];
    scanf("%s", name);
    printf("Your name is %s\n", name);
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Your grade is %c\n", grade);
    getchar();
    demonstrate_getchar();
    return 0;
}

// Function to demonstrate getchar() and its methods
int demonstrate_getchar() {
    printf("\n--- Demonstrating getchar() methods ---\n");
    
    // Method 1: Basic getchar() usage
    printf("Method 1 - Basic getchar():\n");
    printf("Enter a single character: ");
    char ch1;
    scanf("%c", &ch1);
    printf("You entered: %c\n", ch1);
    
    
    // Method 2: Reading multiple characters one by one
    printf("\nMethod 2 - Reading multiple characters:\n");
    printf("Enter 3 characters (press Enter after each): ");
    char ch2, ch3, ch4;
    ch2 = getchar();
    getchar(); // consume newline
    ch3 = getchar();
    getchar(); // consume newline
    ch4 = getchar();
    getchar(); // consume newline
    printf("Characters entered: %c, %c, %c\n", ch2, ch3, ch4);
    
    // Method 3: Reading characters until newline
    printf("\nMethod 3 - Reading until newline:\n");
    printf("Enter a line of text: ");
    char c;
    printf("Characters you entered: ");
    while ((c = getchar()) != '\n') {
        printf("%c ", c);
    }
    printf("\n");
    
    // Method 4: Using getchar() for menu input validation
    printf("\nMethod 4 - Menu input validation:\n");
    char choice;
    do {
        printf("Choose an option (A/B/C): ");
        choice = getchar();
        while (getchar() != '\n'); // clear input buffer
        
        if (choice == 'A' || choice == 'a') {
            printf("You selected option A\n");
            break;
        } else if (choice == 'B' || choice == 'b') {
            printf("You selected option B\n");
            break;
        } else if (choice == 'C' || choice == 'c') {
            printf("You selected option C\n");
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    } while (1);
    demonstrate_putchar();
    return 0;
}

int demonstrate_putchar() {
    printf("\n--- Demonstrating putchar() methods ---\n");
    printf("Method 1 - Basic putchar():\n");
    putchar('A');
    putchar('\n');  
    printf("Method 2 - Printing multiple characters:\n");
    putchar('B');
    putchar('C');
    putchar('D');
    putchar('\n');
    demonstrate_fputs();
    return 0;
}

int demonstrate_fputs(){
    printf("--- Demonstrating fputs() methods ---\n");
    printf("Method 3 - Printing a string:\n");
    fputs("Hello, World!", stdout);
    fputs("\n", stdout);
    demonstrate_fgets();
    return 0;
}

int demonstrate_fgets(){
    printf("--- Demonstrating fgets() methods ---\n");
    printf("Method 4 - Reading a string:\n");
    char name[100];
    fgets(name, 100, stdin);
    printf("You entered: %s\n", name);
    return 0;
}