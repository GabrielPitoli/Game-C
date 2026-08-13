#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "English");


    int secret_code = 0;
    int digit1_code = 0;
    int digit2_code = 0;
    int digit3_code = 0;
    int digit4_code = 0;

    int input_code = 0;
    int digit1_try = 0;
    int digit2_try = 0;
    int digit3_try = 0;
    int digit4_try = 0;

    char slot1 = '_';
    char slot2 = '_';
    char slot3 = '_';
    char slot4 = '_';

    int hint_exec1 = 0;
    int hint_exec2 = 0;
    int hint_exec3 = 0;
    int hint_exec4 = 0;

    int is_correct1 = 0;
    int is_correct2 = 0;
    int is_correct3 = 0;
    int is_correct4 = 0;

    int attempts = 10;
    int play_again = 1;
    int aux_code = 0;
    int remaining_attempts = 0;
    int parity_check = 0;
    int attempts_used = 0;


    while(play_again == 1)
    {
        slot1 = '_';
        slot2 = '_';
        slot3 = '_';
        slot4 = '_';
        attempts_used = 0;
        is_correct1 = 0;
        is_correct2 = 0;
        is_correct3 = 0;
        is_correct4 = 0;
        hint_exec1 = 0;
        hint_exec2 = 0;
        hint_exec3 = 0;
        hint_exec4 = 0;


        secret_code = 1000 + (rand() % 9000);


        aux_code = secret_code;
        digit4_code = aux_code % 10;
        aux_code /= 10;
        digit3_code = aux_code % 10;
        aux_code /= 10;
        digit2_code = aux_code % 10;
        aux_code /= 10;
        digit1_code = aux_code % 10;


        printf("\t\t => Welcome to the SECRET Code Game!!! <=\n\n");
        printf("\tYou have 10 attempts to guess the secret number between [1000 and 9999]\n");
        printf("\tStarting from the 5th attempt, the game will give you hints\n\n\t\t");
        system("pause");
        system("cls");


        for(attempts = 10; attempts > 0; attempts--)
        {
            attempts_used++;


            printf("Enter your code guess: ");
            scanf("%d", &input_code);
            if(input_code < 1000 || input_code > 9999)
            {
                printf("\t\t\t\tA T T E N T I O N\n");
                printf("\tInvalid number\n");
                printf("Please enter a value between 1000 and 9999\n\n\t\t\t\t");
                attempts++;
                attempts_used--;
                system("pause");
                system("cls");
                continue;
            }


            digit4_try = input_code % 10;
            input_code /= 10;
            digit3_try = input_code % 10;
            input_code /= 10;
            digit2_try = input_code % 10;
            input_code /= 10;
            digit1_try = input_code % 10;

            if(attempts_used >= 5)
            {
                printf("\nLet's give you some hints!!!!\n");
            }

            if(digit1_try == digit1_code)
            {
                printf("\n\tYou got the first digit right\n");
                slot1 = '0' + digit1_try;
                is_correct1 = 1;
            }
            else
            {
                printf("\n\tYou got the first digit wrong\n");
                if(attempts_used >= 5 && slot1 == '_')
                {
                    parity_check = digit1_code % 2;
                    if(parity_check == 0 && hint_exec1 == 0)
                    {
                        printf("\t\t=> The first digit is even\n");
                    }
                    if(parity_check != 0 && hint_exec1 == 0)
                    {
                        printf("\t\t=> The first digit is odd\n");
                    }
                    if(digit1_code > 5 && hint_exec1 == 1)
                    {
                        printf("\t\t=> The first digit is greater than 5\n");
                    }
                    if(digit1_code <= 5 && hint_exec1 == 1)
                    {
                        printf("\t\t=> The first digit is less than or equal to 5\n");
                    }
                    hint_exec1++;
                }
            }
            printf("\n");
            if(digit2_try == digit2_code)
            {
                printf("\tYou got the second digit right\n");
                slot2 = '0' + digit2_try;
                is_correct2 = 1;
            }
            else
            {
                printf("\tYou got the second digit wrong\n");
                if(attempts_used >= 5 && slot1 != '_' && slot2 == '_')
                {
                    parity_check = digit2_code % 2;
                    if(parity_check == 0 && hint_exec2 == 0)
                    {
                        printf("\t\t=> The second digit is even\n");
                    }
                    if(parity_check != 0 && hint_exec2 == 0)
                    {
                        printf("\t\t=> The second digit is odd\n");
                    }
                    if(digit2_code > 5 && hint_exec2 == 1)
                    {
                        printf("\t\t=> The second digit is greater than 5\n");
                    }
                    if(digit2_code <= 5 && hint_exec2 == 1)
                    {
                        printf("\t\t=> The second digit is less than or equal to 5\n");
                    }
                    hint_exec2++;
                }
            }
            printf("\n");
            if(digit3_try == digit3_code)
            {
                printf("\tYou got the third digit right\n");
                slot3 = '0' + digit3_try;
                is_correct3 = 1;
            }
            else
            {
                printf("\tYou got the third digit wrong\n");
                if(attempts_used >= 5 && slot1 != '_' && slot2 != '_' && slot3 == '_')
                {
                    parity_check = digit3_code % 2;
                    if(parity_check == 0 && hint_exec3 == 0)
                    {
                        printf("\t\t=> The third digit is even\n");
                    }
                    if(parity_check != 0 && hint_exec3 == 0)
                    {
                        printf("\t\t=> The third digit is odd\n");
                    }
                    if(digit3_code > 5 && hint_exec3 == 1)
                    {
                        printf("\t\t=> The third digit is greater than 5\n");
                    }
                    if(digit3_code <= 5 && hint_exec3 == 1)
                    {
                        printf("\t\t=> The third digit is less than or equal to 5\n");
                    }
                    hint_exec3++;
                }
            }
            printf("\n");
            if(digit4_try == digit4_code)
            {
                printf("\tYou got the fourth digit right\n");
                slot4 = '0' + digit4_try;
                is_correct4 = 1;
            }
            else
            {
                printf("\tYou got the fourth digit wrong\n");
                if(attempts_used >= 5 && slot1 != '_' && slot2 != '_' && slot3 != '_' && slot4 == '_')
                {
                    parity_check = digit4_code % 2;
                    if(parity_check == 0 && hint_exec4 == 0)
                    {
                        printf("\t\t=> The fourth digit is even\n");
                    }
                    if(parity_check != 0 && hint_exec4 == 0)
                    {
                        printf("\t\t=> The fourth digit is odd\n");
                    }
                    if(digit4_code > 5 && hint_exec4 == 1)
                    {
                        printf("\t\t=> The fourth digit is greater than 5\n");
                    }
                    if(digit4_code <= 5 && hint_exec4 == 1)
                    {
                        printf("\t\t=> The fourth digit is less than or equal to 5\n");
                    }
                    hint_exec4++;
                }
            }
            printf("\n");


            if(is_correct1 == 1 && is_correct2 == 1 && is_correct3 == 1 && is_correct4 == 1)
            {
                system("cls");
                printf("\t\t=> C O N G R A T U L A T I O N S ! ! !\n\n");
                printf("\t\tYou guessed the code: %d %d %d %d\n", digit1_code, digit2_code, digit3_code, digit4_code);
                printf("\t\t in %d attempts\n\n\t\t\t\t", attempts_used);
                system("pause");
                system("cls");
                break;
            }
            else
            {
                remaining_attempts = attempts - 1;
                printf("Remaining attempts: %d\n", remaining_attempts);
                printf("Your code status: %c %c %c %c\n\n\t\t\t\t", slot1, slot2, slot3, slot4);
                system("pause");
                system("cls");
            }
        }


        if(attempts == 0)
        {
            printf("Maximum Number of Attempts Exceeded!!!\n\n");
            printf("You COULD NOT GUESS\n");
            printf("THE SECRET CODE WAS: %d\n\n\t\t\t\t", secret_code);
            system("pause");
            system("cls");
        }


        printf("\n\tPlay again??? 1=YES AND 0=NO\n");
        printf("\t\t==> ");
        scanf("%d", &play_again);
        system("cls");
        if(play_again != 0 && play_again != 1)
        {
            printf("Error! Invalid number");
            exit(0);
        }
    }
    return 0;
}
