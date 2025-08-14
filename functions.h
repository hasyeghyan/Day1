#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int equal(int arr[], int size, int arr1[], int size1);
int fib(int n, int arr[], int size);
int minBitFlips(int start, int goal);
int isPalindrome(long num);
long reverseNumber(long num);
int stepsToPalindrome(long num);
void rm(int arr[], int size);
void rm1(char arr[], int size, char c);
int sum(int n);
void swap(int *ptr1, int *ptr2);
int contains(int arr[],int size, int num);
void uppercase(char arr[], int size);
int* merge_sorted(int arr[], int arr1[], int size,int arr2[]);
int missing(int arr[],int n);
void print_digits(char arr[],int size);
int* product_of_same_indexes(int arr1[],int arr2[],int size);
void reverse_array(int arr[], int size);
void rotate_array(int arr[],int size, int k);
int vowels_count(char arr[], int size);
int consonants_count(char arr[], int size);
void unique(int arr[], int size, int arr1[], int size1);

#endif
