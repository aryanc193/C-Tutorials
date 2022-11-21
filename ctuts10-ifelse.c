#include <stdio.h>

int main()
{
     int age;
     printf("Enter your age = \n");
        
     scanf("%d", &age);
     printf("You have entered %d as your age\n", age);

     if (age >= 18){
         printf("This candidate is eligible to vote.\n");
     }

     else if (age >= 10)
     {
         printf("This candidate can vote in kids category\n");
      }

     else{
         printf("This candidate is not eligible ot vote.\n");}
    return 0;
}

// {
//     int a;

//     printf("Which exams have you passed\n1 for maths\n2 for science\n3 for both\n4 for none\n");
//     scanf("%d\n", &a);
    
//     if (a == 3)
//     {
//         printf("Your prize is Rs.45/-");
//     }

//     else if (a == 1)
//     {
//         printf("Your prize is Rs.15/-");
//     }

//     else if (a == 2)
//     {
//         printf("Your prize is Rs.15/-");
//     }
    
//     else if (a == 4)
//     {
//         printf("You got no prize :(");
//     }

//     else 
//     {
//         printf("Invalid input!");
//     }
//     return 0;
// }
