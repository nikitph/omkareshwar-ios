// This file was generated based on '/Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.1.1/layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct DockLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class DockLayout :591
// {
::g::Fuse::Layouts::Layout_type* DockLayout_typeof();
void DockLayout__ArrangePaddingBox_fn(DockLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void DockLayout__GetContentSize_fn(DockLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void DockLayout__GetDock_fn(::g::Fuse::Visual* elm, int* __retval);
void DockLayout__MeasureSubtree_fn(DockLayout* __this, uObject* elements, int* childIndex, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);

struct DockLayout : ::g::Fuse::Layouts::Layout
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _dockProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _dockProperty() { return DockLayout_typeof()->Init(), _dockProperty_; }

    ::g::Uno::Float2 MeasureSubtree(uObject* elements, int childIndex, ::g::Fuse::LayoutParams lp);
    static int GetDock(::g::Fuse::Visual* elm);
};
// }

}}} // ::g::Fuse::Layouts
