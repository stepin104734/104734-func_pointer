#include "unity.h"
#include "factorial.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calc_add(void)
{
  TEST_ASSERT_EQUAL(20, calc(4,5,2));
  TEST_ASSERT_EQUAL(1, calc(6,-5,0));
}
void test_calc_sub(void)
{
  TEST_ASSERT_EQUAL(-7, calc(2,9,1));
  TEST_ASSERT_EQUAL(7, calc(9,2,1));
}
void test_mull(void)
{
  TEST_ASSERT_EQUAL(-25, calc(-5,5,2));
  TEST_ASSERT_EQUAL(0, calc(0,1,2));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calc_add);
  RUN_TEST(test_calc_sub);
  RUN_TEST(test_mull);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
