#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "mot.h"

void testInitMot(){
	mot temp;
	initMot(&temp, "bucolique");
	CU_ASSERT_STRING_EQUAL(temp.contenu,"bucolique");
	initMot(&temp, "anthony");
	CU_ASSERT_STRING_EQUAL(temp.contenu,"anthony");
	initMot(&temp, "égalité");
	CU_ASSERT_STRING_EQUAL(temp.contenu,"égalité");
}

void testObtenirLongueur(){
	mot temp;
	initMot(&temp, "anthony");
	CU_ASSERT_TRUE(obtenirLongueur(&temp)==7);
	initMot(&temp, "dicotonik");
	CU_ASSERT_TRUE(obtenirLongueur(&temp)==9);
	initMot(&temp, "yo");
	CU_ASSERT_TRUE(obtenirLongueur(&temp)==2);
}

void testObtenirChar(){
	mot temp;
	initMot(&temp, "anthony");
	CU_ASSERT_TRUE(obtenirChar(&temp,3)=='h');
	initMot(&temp, "dicotonik");
	CU_ASSERT_TRUE(obtenirChar(&temp,4)=='t');
	initMot(&temp, "salutation");
	CU_ASSERT_TRUE(obtenirChar(&temp,8)=='o');
}

void testObtenirCDC(){
	mot temp;
	char* test;
	initMot(&temp, "anthony");
	obtenirCDC(&temp,&test);
	CU_ASSERT_STRING_EQUAL(test,"anthony");
	initMot(&temp, "youhou");
	obtenirCDC(&temp,&test);
	CU_ASSERT_STRING_EQUAL(test,"youhou");
}

void testCopierMot(){
	mot temp,temp2;
	initMot(&temp, "anthony");
	copierMot(&temp,&temp2);
	CU_ASSERT_STRING_EQUAL(temp.contenu,temp2.contenu);
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

	if ((NULL == CU_add_test(pSuite, "initMot", testInitMot)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}

	if ((NULL == CU_add_test(pSuite, "analyserPhrase", testObtenirLongueur)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}

	if ((NULL == CU_add_test(pSuite, "obtenirChar", testObtenirChar)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}

	if ((NULL == CU_add_test(pSuite, "obtenirCDC", testObtenirCDC)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}

	if ((NULL == CU_add_test(pSuite, "copierMot", testCopierMot)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}