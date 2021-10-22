#include "prime.h"
#include"unity.h"
#include"unity_internals.h"
void tearDown(){}

void test_prime(void){
    TEST_ASSERT_TRUE(prime);
}
int main()
{
  UNITY_BEGIN();
    RUN_TEST(test_prime);
  return UNITY_END(); 
}
