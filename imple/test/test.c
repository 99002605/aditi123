#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "imple"

/* Prototypes for all the test functions */
void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_modulus(void);
void test_power(void);
void test_factorial(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_addition);
  CU_add_test(suite, "subtract", test_subtraction);
  CU_add_test(suite, "multiply", test_multiplication);
  CU_add_test(suite, "divide", test_division);
  CU_add_test(suite, "add", test_modulus);
  CU_add_test(suite, "subtract", test_power);
  CU_add_test(suite, "multiply", test_factorial);
 


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == addition(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == addition(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtraction(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtraction(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiplication(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiplication(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == division(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == division(2, 2));
}

void test_modulus(void) {
  CU_ASSERT(0 == modulus(10, 2));
  
  /* Dummy fail*/
  CU_ASSERT(3 == modulus(2, 3));
}

void test_power(void) {
  CU_ASSERT(6 == power(2, 3));
  
  /* Dummy fail*/
  CU_ASSERT(3 == power(2, 0));
}

void test_factorial(void) {
  CU_ASSERT(120 == factorial(5));
  
  /* Dummy fail*/
  CU_ASSERT(32 == factorial(4));
}
