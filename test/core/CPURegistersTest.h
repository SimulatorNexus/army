#ifndef ARMY_TEST_CPU_REGISTERS_H
#define ARMY_TEST_CPU_REGISTERS_H

#include <cppunit/extensions/HelperMacros.h>

#include "core/CPURegisters.h"

class CPURegistersTest : public CppUnit::TestFixture {
public:
    CPPUNIT_TEST_SUITE(CPURegistersTest);
    //CPPUNIT_TEST(testMode);
    CPPUNIT_TEST(testRegs);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

    //void testMode();
    void testRegs();

private:
    CPURegisters *regs_;
};

#endif
