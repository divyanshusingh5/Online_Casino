#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();
float lunchdinner();
float breakfast();
float kiddies();
float promotion();
float drink();
float frenchfries();
float dessert();
float total();
float totaldinein();
float totaltakeout();
void login();

void guess(int N)
{
    srand(time(NULL));
    int number, guess, numberofguess = 0;
    number = rand() % N;
    printf("\t\t\t\tGuess a number between"
           " 0 and %d\n",
           N);
    do
    {
        if (numberofguess > 9)
        {
            printf("\n\t\t\t\tYou Loose!\n");
            break;
        }                    // Input by user
        scanf("%d", &guess); // When user guesses lower than actual number
        if (guess > number)
        {
            printf("Lower number please!\n");
            numberofguess++;
        }
        else if (number > guess)
        {
            printf("Higher number"
                   " please!\n");
            numberofguess++;
        }
        else
            printf("\t\t\t\tYou guessed the number in %d attempts!\n", numberofguess);
    } while (guess != number);
}

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    if (c1 == c2)
        return -1;
    else if (c1 == 'r' && c2 == 's')
        return 1;
    else if (c2 == 'r' && c1 == 's')
        return 0;
    else if (c1 == 'p' && c2 == 'r')
        return 1;
    else if (c2 == 'p' && c1 == 'r')
        return 0;
    else if (c1 == 's' && c2 == 'p')
        return 1;
    else if (c2 == 's' && c1 == 'p')
        return 0;
}

void menu() // This functions is for selecting the items from the menu list.
{
    int x;
    // Menu
    printf("No.     Item                Price       Remark\n");
    printf("1       Lunch/Dinner Set    Rupee 200   1 Burger/chicken\n");
    printf("                                        1 drink(medium)\n");
    printf("                                        1 French fries\n\n");
    printf("2       Breakfast Set       Rupee 150   1 breakfast\n");
    printf("                                        1 drink(medium)\n\n");
    printf("3       Kiddies Set         Rupee 300   1 burger/chicken\n");
    printf("                                        1 drink(small)\n");
    printf("                                        1 French fries(small)\n\n");
    printf("4       Promotion           Rupee 69       Burger/Chicken\n\n");
    printf("5       Drink               Rupee 175      Medium size\n\n");
    printf("6       French Fries        Rupee 99       Medium size\n\n");
    printf("7       Dessert             Rupee 121      Ice cream/pie/cake\n\n");
    printf("8       Display Total \n\n");
    printf("9       End\n\n");

    printf("Please Select Your Option from Above Menu : ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        lunchdinner();
        break;

    case 2:
        breakfast();
        break;

    case 3:
        kiddies();
        break;

    case 4:
        promotion();
        break;

    case 5:
        drink();
        break;

    case 6:
        frenchfries();
        break;

    case 7:
        dessert();
        break;

    case 8:
        total();
        break;

    case 9:
        exit(0);
    default:
        printf("Invalid! Error!\n");
    }
}

int x, r, t, w, z;
float land, land1, buff, kid, pro, din, fren, dess, total1;

float lunchdinner()
{
    printf("You have selected Lunch/Dinner Set.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d", &x);
    land = x * 200;
    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d", &r);
    if (r == 1)
    {
        system("cls"); // clear screen.
        {
            menu();
        }
    }
    else
        total();
}

float breakfast()
{
    printf("You have selected Breakfast Set.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d", &x);

    buff = x * 150.0;

    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d", &r);

    if (r == 1)
    {
        system("cls");
        menu();
    }
    else
        total();
}

float kiddies()
{
    printf("You have selected Kiddies Set.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d", &x);
    kid = x * 300.00;
    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d", &r);
    if (r == 1)
    {
        system("cls");
        menu();
    }
    else
        total();
}

float promotion()
{
    printf("You have selected Promotion.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d", &x);
    pro = x * 69.0;
    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d", &r);
    if (r == 1)
    {
        system("cls");
        menu();
    }
    else
        total();
}

float drink()
{
    printf("You have selected to order Drink.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d", &x);
    din = x * 179.00;
    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d", &r);
    if (r == 1)
    {
        system("cls");
        menu();
    }
    else
        total();
}

float frenchfries()
{
    printf("You have selected French Fries.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d", &x);
    fren = x * 99.00;
    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d", &r);
    if (r == 1)
    {
        system("cls");
        menu();
    }
    else
        total();
}

float dessert()
{
    printf("You have selected Dessert.");
    printf("\nPlease Enter your Quantity :");
    scanf("%d", &x);
    dess = x * 121.00;
    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d", &r);
    if (r == 1)
    {
        system("cls");
        menu();
    }
    else
        total();
}

float total() // Food Menu Calculations.
{
    printf("Do you want to dine in or take away?\n");
    printf("1) Dine In 2) Take Away\n");
    scanf("%d", &w);
    switch (w)
    {
    case 1:
        totaldinein();
        break;

    case 2:
        totaltakeout();
        break;

    default:
        system("cls");
        printf("\n\nInvalid Error!\n");
    }
}

float totaldinein()
// This function is to calculate the total price of DINING IN including the 5% government tax and 10% dining in charges.
{
    system("cls");
    printf("Select your payment method: 1--> Cash Payment     2--> Credit Card Payment\n");
    scanf("%d", &t);
    printf("======================================================================================================\n");

    switch (t)
    {
    case 1:
        total1 += (land + buff + kid + pro + din + fren + dess) * 1.15;
        // Calculation for grand total with government taxes,and cash payment.
        printf("\nThe TOTAL IS RUPEE %.2f Only\n", total1);
        break;
        printf("======================================================================================================\n");
    case 2:
        total1 += (land + buff + kid + pro + din + fren + dess) * 1.18;
        // Calculation for grand total with government taxes,and credit card payment.
        printf("\nThe TOTAL IS RUPEE %.2f Only\n", total1);
        break;
        printf("======================================================================================================\n");
    default:
        system("cls");
        printf("\nInvalid Error");
    }
}

float totaltakeout()
// This function is to calculate the  total price of TAKE AWAY including the 5% government tax and 5% dining in charges.
{
    system("cls");
    printf("Select your payment method:1--> Cash Payment     2--> Credit Card Payment\n");
    scanf("%d", &t);
    printf("======================================================================================================\n");
    switch (t)
    {
    case 1:
        total1 += (land + buff + kid + pro + din + fren + dess) * 1.10;
        // Calculation for grand total with government taxes,and cash payment.
        printf("The Total is RUPEEE %.2f\n\n ONLY", total1);
        break;
        printf("======================================================================================================\n");

    case 2:
        total1 += (land + buff + kid + pro + din + fren + dess) * 1.13; // Calculation for grand total with government taxes,and credit card payment.
        printf("The TOTAL IS  RUPEE %.2f Only\n", total1);
        break;
        printf("======================================================================================================\n");
    default:
        system("cls");
        printf("\nInvalid Error");
    }
}

int main()
{
    int choice;
    printf("ENTER CHOICE 1 to play Guess The Number \n");
    printf("ENTER 2 to play STONE PAPER SCISSORS \n");
    printf("Enter 3 TO ENJOY SNAKES ");
    scanf("%d", &choice);
    if (choice == 1)
    // Guess the number
    {
        int N = 20;
        printf("==================================================================================================================\n");

        guess(N);
        printf("==================================================================================================================\n");
    }
    else if (choice == 2)
    {
        // rock, paper & scissors -
        printf("===========================\tWELCOME TO DALTON CASINO ROCK PAPER SCISSOR");
        int playerScore = 0, compScore = 0, temp;
        char playerChar, compChar;
        char dict[] = {'r', 'p', 's'};
        printf("\t=========================\n\n");
        for (int i = 0; i < 3; i++)
        {
            // Take player input
            printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
            printf("\tPlayer's turn: ");
            scanf("%d", &temp);
            getchar();
            playerChar = dict[temp - 1];
            printf(" -----------------\n");
            printf("| You choose: %c   |\n", playerChar);
            printf(" -----------------\n\n");
            // computer generate
            printf("\tComputer's turn\n");
            temp = generateRandomNumber(3) + 1;
            compChar = dict[temp - 1];
            printf(" --------------------\n");
            printf("| Computer choose: %c |\n", compChar);
            printf(" --------------------\n\n");
            // compater character and increment the score
            if (greater(compChar, playerChar) == 1)
            {
                compScore++;
                printf("\t\tComputer Got It!\n\n");
            }
            else if (greater(compChar, playerChar) == -1)
            {
                compScore++;
                playerScore++;
                printf("\t\tIt's a draw. Both got 1 point!\n\n");
            }
            else
            {
                playerScore++;
                printf("\t\tYou Got It!\n\n");
            }
            printf(" -------------\n");
            printf("| You: %d      |\n", playerScore);
            printf("| Computer: %d |\n", compScore);
            printf(" -------------\n\n");
            printf("======================================================================================================================\n\n");
        }

        printf(" -----------------\n");
        printf("|   Final Score   |\n");
        printf(" -----------------\n");
        printf("|  You | Computer |\n");
        printf("|------|----------|\n");
        printf("|   %d |    %d     |\n", playerScore, compScore);
        printf(" -----------------\n\n");
        {
            if (playerScore > compScore)
            {
                printf("\n\t -------------------\n");
                printf("\t| You Win the match |\n");
                printf("\t -------------------\n");
            }
            else if (playerScore < compScore)
            {
                printf("\n\t ------------------------\n");
                printf("\t| Computer Win the match |\n");
                printf("\t ------------------------\n");
            }
            else
            {
                printf("\n\t -------------\n");
                printf("\t| It's a draw |\n");
                printf("\t -------------\n");
            }
        }
    }
    else if (choice == 3)
    {
        int x, r, t, w, z;
        float land, land1, buff, kid, pro, din, fren, dess, total1;
        printf("\t\t\tWelcome to DALTON CASINO FAMILY  Restaurant\n");
        printf("*\t\t\twe are known for our taste......\n\n");
        struct userdetails
        {
            char name[20];
            int age;
            int orderno;
            char br[20];
            long phone;
            int tableno;
        } s1;
        printf("Enter coustomer  name \n");
        scanf("%s", &s1.name);
        printf("Enter coustomer age ");
        scanf("%d", &s1.age);
        printf("Enter reaturant branch  phone number");
        scanf("%ld", &s1.phone);
        printf("Enter branch of resturant");
        scanf("%s", s1.br);
        printf("Enter order no");
        scanf("%d", &s1.orderno);
        printf("Enter Table ");
        scanf("%d", &s1.tableno);
        if (s1.age > 18)
        {
            menu();
            printf("\n\t\t\t\t ORDER NO  %d", &s1.orderno);
            printf("\n\t\t\t\t TABLE BOOKED %d\n", s1.tableno);
            printf("\n\t\t\t\t DALTON BRANCH %s\n", s1.br);
            printf("\t\t\t\t\tTHANX FOR VISITING US SIR  %s \n", s1.name);
            printf("\n\t\t\t\tOUR HELP LINE  PHONE NO is %ld \n", s1.phone);
            printf("======================================================================================================\n");
        }
        else
        {
            printf("\t\n NOT FOR YOU KID SORRY");
            exit;
        }
    }
    return 0;
}