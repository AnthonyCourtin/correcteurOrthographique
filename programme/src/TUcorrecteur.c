#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "correcteur.h"

void testEstUnSeparateur(){
	
	CU_ASSERT_TRUE(estUnSeparateur('/')==1)
	CU_ASSERT_TRUE(estUnSeparateur('b')==0)
	CU_ASSERT_TRUE(estUnSeparateur('(')==1)
	CU_ASSERT_TRUE(estUnSeparateur('n')==0)
	CU_ASSERT_TRUE(estUnSeparateur('%')==1)
	CU_ASSERT_TRUE(estUnSeparateur('*')==1)	
}

void testAnalyserPhrase(){
	char chaineTest[]="bonjour.ceci/est,un(petit)test.";
	mot ensemble[30];
	analyserPhrase(chaineTest,ensemble);
	CU_ASSERT_STRING_EQUAL(ensemble[0].contenu,"bonjour");
	CU_ASSERT_STRING_EQUAL(ensemble[1].contenu,"ceci");
	CU_ASSERT_STRING_EQUAL(ensemble[2].contenu,"est");
	CU_ASSERT_STRING_EQUAL(ensemble[3].contenu,"un");
	CU_ASSERT_STRING_EQUAL(ensemble[4].contenu,"petit");
	CU_ASSERT_STRING_EQUAL(ensemble[5].contenu,"test");
}

int main(int argc, char const *argv[])
{
	CU_pSuite pSuite = NULL;

	if (CUE_SUCCESS != CU_initialize_registry())
	{
		return CU_get_error();
	}

	pSuite = CU_add_suite("Tests boite noire",0,0);

	if (NULL == pSuite)
	{
		CU_cleanup_registry ();
		return CU_get_error();
	}

	if ((NULL == CU_add_test(pSuite, "estUnSeparateur", testEstUnSeparateur)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}

	if ((NULL == CU_add_test(pSuite, "analyserPhrase", testAnalyserPhrase)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
