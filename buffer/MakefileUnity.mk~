#This makefile makes the examples from the first few chapters with Unity test harness

#Set this to @ to keep the makefile quiet
#SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = BookCode_Unity

#--- Inputs ----#
#UNITY_HOME = unity.framework
UNITY_HOME = ~/hoover_research/unity
CPP_PLATFORM = Gcc
PROJECT_HOME_DIR = .
PROJECT_TEST_DIR = ./tests
CPP_PLATFORM = Gcc
UNITY_BUILD_HOME = $(UNITY_HOME)/extras/fixture/build

UNITY_CFLAGS += -DUNITY_OUTPUT_CHAR=UnityOutputCharSpy_OutputChar
UNITY_WARNINGFLAGS = -Wall -Werror -Wswitch-default
#UNITY_WARNINGFLAGS += -Wshadow 
#UNITY_BUILD_HOME = ~/hoover-research/unity/build


SRC_DIRS = \
	$(PROJECT_HOME_DIR)/src/\

TEST_SRC_DIRS = \
	$(PROJECT_TEST_DIR)\
	$(UNITY_HOME)/src\
	$(UNITY_HOME)/extras/fixture/src\
	$(UNITY_HOME)/extras/fixture/test\

MOCKS_SRC_DIRS = \
	$(PROJECT_TEST_DIR)/mocks\

INCLUDE_DIRS = \
	.\
	$(UNITY_HOME)/src\
	$(UNITY_HOME)/extras/fixture/src\
	$(UNITY_HOME)/extras/fixture/test\
	$(PROJECT_HOME_DIR)/src\
	$(PROJECT_HOME_DIR)/tests\
	$(PROJECT_HOME_DIR)/tests/mocks\
  
include $(UNITY_BUILD_HOME)/MakefileWorker.mk

