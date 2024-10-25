#include<stdio.h>
#include<math.h>

int main(){
    printf("        *****************************************\n");
    printf("        *       Operations Manager Tool         *\n");
    printf("        *                                       *\n");
    printf("        *       1. Add                          *\n");
    printf("        *       2. Subtract                     *\n");
    printf("        *       3. Multiply                     *\n");
    printf("        *       4. Divide                       *\n");
    printf("        *       5. Modulus                      *\n");
    printf("        *       6. Exit                         *\n");
    printf("        *                                       *\n");
    printf("        *****************************************\n");

    int option;
    double num1,num2,result;

    printf("Select an option (1-6): ");
    scanf("%d",&option);

    if(option<1 || option>6){

        printf("Invalid Selection. Please restart the program and select a valid option.\n");
        return 0;
    }

    else if(option==6){
        printf("Exiting the program. Goodbye!\n");
        return 0;
    }

    printf("Enter the first number: ");
    scanf(" %lf",&num1);
    printf("Enter the second number: ");
    scanf(" %lf",&num2);

    switch(option){
        case 1:
              result=num1+num2;
              printf("The result is: %.2f\n", result);
              break;
        case 2:
              result=num1-num2;
              printf("The result is: %.2f\n",result);
              break;
        case 3:
              result=num1*num2;
              printf("The result is: %.2f\n",result);
              break;
        case 4:
              if (num2!=0) {
              result=num1/num2;
              printf("The result is: %.2f\n",result);
            } else {
              printf("Division by zero is not allowed.\n");
            }
              break;
        case 5:
              if (num2>=0 && num2<1 ) {
              printf("Modulus by zero is not allowed.\n");
            } else {
              result=fmod(num1,num2);
              printf("The result of %.2lf %% %.2lf (from %.2lf %% %.2lf) is: %.0lf\n",num1,num2,num1,num2,result);
            }
              break;
    }
    return 0;
}

