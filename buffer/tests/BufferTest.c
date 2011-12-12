#include "unity_fixture.h"
#include <stdint.h>
#include "buffer.h"



static void RunAllTests(void) {
    RUN_TEST_GROUP(Buffer);
}

int main(int argc, char * argv[]) {
    return UnityMain(argc, argv, RunAllTests);
}

unsigned char data[50];
cBuffer bufferPointer;
unsigned char* dataPtr = data;
unsigned short size = 50;
 


TEST_GROUP(Buffer);


TEST_SETUP(Buffer)
{   

 bufferInit((cBuffer*)&bufferPointer,dataPtr,size);
 
}
TEST_TEAR_DOWN(Buffer)
{
    
}

TEST(Buffer, bufferAcceptsZeroAsSize)
{
  size = 0;
  bufferInit((cBuffer*)&bufferPointer,dataPtr,size);
}

TEST(Buffer, bufferPushingElementDoesNotFail)
{  
  int useless = 8;
  int element = (unsigned char)useless;
  bufferAddToEnd((cBuffer*)&bufferPointer,element);
}

TEST(Buffer, bufferPushingElementAddsElementToBuffer)
{  
  int useless = 8;
  int element = (unsigned char)useless;
  unsigned char addedElement;
  bufferAddToEnd((cBuffer*)&bufferPointer,element);
  addedElement = bufferGetFromFront((cBuffer*)&bufferPointer);
  TEST_ASSERT_EQUAL_UINT16(addedElement,element);
  
}


