// This file was generated based on '/Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Scripting/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct BoolChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class BoolChangedArgs :344
// {
uType* BoolChangedArgs_typeof();
void BoolChangedArgs__ctor_2_fn(BoolChangedArgs* __this, bool* value);
void BoolChangedArgs__New3_fn(bool* value, BoolChangedArgs** __retval);

struct BoolChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_2(bool value);
    static BoolChangedArgs* New3(bool value);
};
// }

}}} // ::g::Fuse::Scripting
