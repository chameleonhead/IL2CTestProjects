// [14-1] This is Test1 native code translated by IL2C, do not edit.

#include <Test1.h>

#ifdef __cplusplus
extern "C" {
#endif

///////////////////////////////////////////////////////////////////////////
// [14-2] Type pre definitions:

////////////////////////////////////////////////////////////
// [2-1-1] .NET types:

/* internal class */ typedef struct Test1_Program Test1_Program;

////////////////////////////////////////////////////////////
// [2-1-2] VTable types:

typedef System_Object_VTABLE_DECL__ Test1_Program_VTABLE_DECL__;

///////////////////////////////////////////////////////////////////////////
// [14-3] Type body definitions:

#ifdef Test1_DECL_TYPE_BODY__

////////////////////////////////////////////////////////////
// [1] Test1.Program

// [1-1-2] Class layout
/* internal class */ struct Test1_Program
{
    Test1_Program_VTABLE_DECL__* vptr0__;
};

// [1-5-1] VTable (Same as System.Object)
#define Test1_Program_VTABLE__ System_Object_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(Test1_Program);

//////////////////////////////////////////////////////////////////////////////////
// [2-3] Methods: Test1.Program

extern /* private static */ void Test1_Program_Main(il2c_arraytype(System_String)* args);
extern /* public */ void Test1_Program__ctor(Test1_Program* this__);

#endif

#ifdef __cplusplus
}
#endif
