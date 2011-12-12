/*
 * File:   LedDriverTestRunner.c
 * Author: david
 *
 * Created on October 20, 2011, 6:08 PM
 */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(Buffer)
{
  RUN_TEST_CASE(Buffer,bufferAcceptsZeroAsSize);
  RUN_TEST_CASE(Buffer,bufferPushingElementDoesNotFail);
  RUN_TEST_CASE(Buffer,bufferPushingElementAddsElementToBuffer);
}
