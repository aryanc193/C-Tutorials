/*
user interface
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
*/
#include <stdio.h>

float kmtomile(float a)
{
    return a / 1.609344;
}

float inchestofoot(float a)
{
    return (float)a / 12;
}

float cmtoinches(float a)
{
    return (float)a / 2.54;
}

float poundtokgs(float a)
{
    return (float)a / 2.204623;
}

float inchestometer(float a)
{
    return (float)a / 39.37008;
}

int main()
{
    int opt, choice;
    float a, b;

    do
    {
        printf("******************************************************************************\n");
        printf("Enter the conversion you'd like to perform:\n1. Kilometers to Miles\n2. Inches to Foot\n3. Centimeters to Inches\n4. Inches to Meters\n5. Pounds to Kilograms\n6. Exit\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("Enter the value in kilometers:\n");
            scanf("%f", &a);

            b = kmtomile(a);
            printf("The converted value is: %f \"\n", b);
            break;

        case 2:
            printf("Enter the value in inches:\n");
            scanf("%f", &a);

            b = inchestofoot(a);
            printf("The converted value is: %f ft\n", b);
            break;

        case 3:
            printf("Enter the value in centimeters:\n");
            scanf("%f", &a);

            b = cmtoinches(a);
            printf("The converted value is: %f \"\n", b);
            break;

        case 4:
            printf("Enter the value in inches:\n");
            scanf("%f", &a);

            b = inchestometer(a);
            printf("The converted value is: %f m\n", b);
            break;

        case 5:
            printf("Enter the value in pounds:\n");
            scanf("%f", &a);

            b = poundtokgs(a);
            printf("The converted value is: %f kg\n", b);
            break;

        default:
            break;
        }
    } while (opt != 6);

    return 0;
}

/*
#include <stdio.h>

int main()
{
    
    char input;
   float kmsToMiles = 0.621371;
   float inchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float inchesToMeters = 0.0254;
   float first, second;

   while (1)
   {
       printf("Enter the input character. q to quit\n1. kms to miles\n2. inches to foot\n3. cms to inches\n4. pound to kgs\n5. inches to meters\n");
       scanf(" %c", &input);
    //    printf("The character is '%c'", input);
       switch (input)
       {
       case 'q':
        printf("Quitting the program...");
        goto end;
        break;

        case '1':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * kmsToMiles;
        printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
        break;

        case '2':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * inchesToFoot;
        printf("%f Inches is equal to %f Foot\n", first, second);
        break;

        case '3':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * cmsToInches;
        printf("%f Cms is equal to %f Inches\n", first, second);
        break;

        case '4':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * poundToKgs;
        printf("%f Pounds is equal to Kgs %f \n", first, second);
        break;

        case '5':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * inchesToMeters;
        printf("%f inches is equal to %f meters \n", first, second);
        break;

       default:
       printf("In default now");
           break;
       }
   }
   end:

    return 0;
}
*/