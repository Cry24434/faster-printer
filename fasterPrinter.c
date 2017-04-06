#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

/*
// Function that time the "printf" function
*/
static void time_printf() {
  clock_t start = clock();
  printf("test ");
  clock_t stop = clock();
  double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
  printf("printf---------- %f\n\n", elapsed);
  return ;
}

/*
// Function that time the "printf" function with a flag
*/
static void time_printf_with_flag() {
  clock_t start = clock();
  printf("%s","test ");
  clock_t stop = clock();
  double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
  printf("flag-printf----- %f\n\n", elapsed);
  return ;
}

/*
// Function that time the "puts" function
*/
static void time_puts() {
  clock_t start = clock();
  puts("test ");
  clock_t stop = clock();
  double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
  printf("puts------------ %f\n\n", elapsed);
  return ;
}

/*
// Function that time the "write" function with an
// "strlen" function to measure the string for strlen's third parameter
*/
static void time_write_with_strlen() {
  clock_t start = clock();
  write(1, "test ", strlen("test "));
  clock_t stop = clock();
  double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
  printf("write-strlen---- %f\n\n", elapsed);
  return ;
}

/*
// Function that time the "write" function
// without calling the "strlen" function to measure the string
*/
static void time_write_without_strlen() {
  clock_t start = clock();
  write(1, "test ", 5);
  clock_t stop = clock();
  double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
  printf("write-no-strlen- %f\n\n", elapsed);
  return ;
}

int main() {
  time_printf();
  time_printf_with_flag();
  time_write_with_strlen();
  time_write_without_strlen();
  time_puts();
  return 0;
}
