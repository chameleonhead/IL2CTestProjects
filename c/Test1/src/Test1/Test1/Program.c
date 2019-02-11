// [15-2] This is Test1 native code translated by IL2C, do not edit.

#include <Test1.h>
#include <Test1_internal.h>

#include <mscorlib.h>

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////////////
// [9-1] Type: Test1.Program

//////////////////////////////////////////////////////////////////////////////////
// [9-2] File scope prototypes:

//////////////////////////////////////////////////////////////////////////////////
// [2-3] Methods: Test1.Program

extern /* private static */ void Test1_Program_Main(il2c_arraytype(System_String)* args);

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: Test1.Program

///////////////////////////////////////
// [3] Test1.Program.Main(System.String[] args)

//-------------------
// [3-7] Declare execution frame:

typedef struct Test1_Program_Main_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    System_String* stack0_0__;
} Test1_Program_Main_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void Test1_Program_Main(il2c_arraytype(System_String)* args)
{
    //-------------------
    // [3-5] Setup execution frame:

    Test1_Program_Main_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldstr "Hello, World"            : Program.cs(9) */
    frame__.stack0_0__ = Test1_string0__;
    /* IL_0005: call System.Console.WriteLine   : Program.cs(9) */
    System_Console_WriteLine_10(frame__.stack0_0__);
    /* IL_000a: ret                             : Program.cs(10) */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] Test1.Program..ctor(Test1.Program this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct Test1_Program__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    Test1_Program* stack0_0__;
} Test1_Program__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void Test1_Program__ctor(Test1_Program* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-5] Setup execution frame:

    Test1_Program__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0001: call System.Object..ctor */
    System_Object__ctor((System_Object*)frame__.stack0_0__);
    /* IL_0006: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.Object)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(Test1_Program, "Test1.Program", IL2C_TYPE_REFERENCE, sizeof(Test1_Program), System_Object, 0, 0)
IL2C_RUNTIME_TYPE_END();

#ifdef __cplusplus
}
#endif
