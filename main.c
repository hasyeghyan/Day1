#include <stdio.h>
#include "functions.h"

int main(){
    /* const int size = 5;
    const int size1 = 5;
    int arr[size] = {};
    int arr1[size1] = {};

    printf("Input first  array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);

    printf("Input second array elements: ");
    for(int i = 0; i < size1; ++i)
       scanf("%d", &arr1[i]);

   if(equal(arr,size,arr1,size1)){
      printf("Arrays are equal\n");
   }
   else
      printf("Arrays are not equal\n");
   return  0;  */
  
   /*  const int size = 5;
    int arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);

    int number = 0;
    printf("Input your number: ");
    scanf("%d", &number);
    int flag = 0;
    if(contains(arr,size,number))
           printf("Array is contaning %d\n", number);
    else
         printf("Array is not containg %d\n", number);
*/

   /*  const int size = 5;
    char arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf(" %c", &arr[i]);

    uppercase(arr,size);


       for(int i = 0; i < size; ++i)
           printf("%c ", arr[i]);

       printf("\n");

   return  0;
 */ 

  /*int n = 0;
    printf("PLease input your number: ");
    scanf("%d", &n);

    const int size = n + 1;
    int arr[size] = {};

    printf("%dth fibonachi element is %d\n", n, fib(n,arr,size));

    return 0;
 */
   /*const int size = 3;
    int arr[size]= {};
    int arr1[size] = {};

    printf("Input your array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);

    printf("Input your array1 elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr1[i]);


    int temp = 0;
    for (int i = 0; i < size; i++){
         for(int j = i + 1; j < size; j++ ){
             if (arr[i] > arr[j]){
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
         }
    }

    printf("Sorted array is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);

    }
    printf("\n");

    temp = 0;
    for (int i = 0; i < size; i++){
         for(int j = i + 1; j < size; j++ ){
             if (arr1[i] > arr1[j]){
                 temp = arr1[i];
                 arr1[i] = arr1[j];
                 arr1[j] = temp;
             }
         }
    }
    printf("Sorted array1 is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr1[i]);

    }
    printf("\n");

   int arr2[2 * size] = {};
   merge_sorted(arr,arr1,size,arr2);

    printf("Sorted  merged array is: ") ;
     for(int l = 0; l < 2 * size; l++){
        printf("%d ", arr2[l]);

    }
     printf("\n");

 */
   /*  int num1 = 0;
    int num2 = 0;

    printf("Please input your first number: ");
    scanf("%d", &num1);

    printf("PLeaes input second number: ");
    scanf("%d", &num2);

    printf("Minimum bit flips is %d\n", minBitFlips(num1, num2)); */
  /* const int n = 5;
    int arr[5]= { 5, 1, 4, 2, 3};



    printf("Missing number is %d\n", missing(arr,n));





   return  0;
 */
 /*long number;

    printf("Please input your number: ");
    if (scanf("%ld", &number) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    int result = stepsToPalindrome(number);

    if (result == -1) {
        printf("Palindrome not found within step limit or invalid input.\n");
    } else {
        printf("Steps to palindrome: %d\n", result);
    }

    return 0;
 */
  /* const int size = 5;
    char arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf(" %c", &arr[i]);

    print_digits(arr,size);
    return 0;
 */
  /* const int size = 5;
    int arr1[size] = {};
    int arr2[size] = {};

    printf("Input array1 elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr1[i]);

    printf("Input array2 elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr2[i]);

    product_of_same_indexes(arr1,arr2,size);

    printf("Resut is: ");
    for (int i = 0; i < size; ++i){
       printf("%d ", arr1[i]);
    }

    printf("\n");




   return  0;
}
 */
  /*const int size = 5;
    int arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);

    reverse_array(arr,size);

       for(int i = 0; i < size; ++i)
           printf("%d ", arr[i]);

       printf("\n");






   return  0;
 */
  /*const int size = 5;
    int arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);

    rm(arr, size);



       printf("\n");






   return  0;
 */
  /*   const int size = 5;
    char arr[size] = {};

    char c = 0;
    printf("Please input your character: ");
    scanf(" %c", &c);

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf(" %c", &arr[i]);

    printf("Updated array is: ");
    rm1(arr, size, c);

    printf("\n");
    return 0; */
  /*  const int size = 5;
    int arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);

    int k = 0;
    printf("Input k: ");
    scanf("%d", &k);

    rotate_array(arr,size,k);

    printf("Rotated array is: ");
    for(int i = 0; i < size; ++i){
       printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
 */
  /*  int n = 0;
    printf("PLease input your number: ");
    scanf("%d", &n);

    printf("%d's digits sum is  %d\n", n, sum(n));

    return 0;
 */
    /*   int num1 = 0;
    int num2 = 0;;

    printf("Please input your first number: ");
    scanf("%d", &num1);

    printf("Please input your second number: ");
    scanf("%d", &num2);

    swap(&num1, &num2);
    printf("Swapped numbers are %d and %d\n", num1,num2);

   return 0;
 */
  /* const int size = 5;
    int arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);

    int max = arr[0];
    for(int i = 0; i < size; ++i){
        max = arr[i] > max ? arr[i] : max;
    }

    const int size1 = 2 * max;
    int arr1[size1] = {};


    unique(arr, size, arr1, size1);
    for(int i = 0; i < size; ++i){
         printf("%d appeasr %d times\n", arr[i], arr1[arr[i]]);
    }
    printf("\n");
    return 0; */
 /* const int size = 5;
    char arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf(" %c", &arr[i]);

    printf("Vowels count is %d\n", vowels_count(arr,size));
    printf("Consonants count is %d\n", consonants_count(arr,size));
    return 0;
 */
  

   
}
