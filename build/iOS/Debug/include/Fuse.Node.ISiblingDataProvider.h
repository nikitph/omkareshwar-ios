// This file was generated based on '/Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface Node.ISiblingDataProvider :2381
// {
uInterfaceType* Node__ISiblingDataProvider_typeof();

struct Node__ISiblingDataProvider
{
    void(*fp_get_Data)(uObject*, uObject**);
    static uObject* Data(const uInterface& __this) { uObject* __retval; return __this.VTable<Node__ISiblingDataProvider>()->fp_get_Data(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
