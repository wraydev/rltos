/*
 * queue_tests.c
 *
 *  Created on: 14 Oct 2021
 *      Author: Louis Wray
 */

#include "CppUTest/TestHarness.h"
#include <memory>

extern "C" {
/* Including the source file allows us to test the internal workings of the module*/
#include "rltos_task.h"
#include "queue/rltos_queue.c"
}





/** Test group for dummy struct sizes*/
TEST_GROUP(RltosQueueTests)
{
   void setup(void)
   {
       /* Do Nothing*/
   }
   /* END OF FUNCTION*/

   void teardown(void)
   {
       /* Do Nothing*/
   }
   /* END OF FUNCTION*/
};

TEST(RltosQueueTests, WriteFirstTestQueue)
{
   CHECK_TEXT(true, "No Code To Test");
}
/* END OF TEST*/