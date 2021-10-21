#include "unity.h"
	#include"test_operations.h"
	#include"sum.h"

	
	void test_sum(void);
	void setUp()
	{	}
	void tearDown()
	{	}
	
	

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_sum);
		

  		return UNITY_END();
	}

	void test_sum(void)
	{
  		TEST_ASSERT_EQUAL(30, sum(10, 20));
  		TEST_ASSERT_EQUAL(-30, sum(-50, 20));
	}
