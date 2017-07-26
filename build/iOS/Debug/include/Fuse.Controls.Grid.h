// This file was generated based on '/Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Grid :662
// {
::g::Fuse::Controls::Panel_type* Grid_typeof();
void Grid__ctor_7_fn(Grid* __this);
void Grid__get_Columns_fn(Grid* __this, uString** __retval);
void Grid__set_Columns_fn(Grid* __this, uString* value);
void Grid__New4_fn(Grid** __retval);
void Grid__get_Rows_fn(Grid* __this, uString** __retval);
void Grid__set_Rows_fn(Grid* __this, uString* value);
void Grid__SetColumn_fn(::g::Fuse::Elements::Element* elm, int* col);
void Grid__SetColumnSpan_fn(::g::Fuse::Elements::Element* elm, int* span);
void Grid__SetRow_fn(::g::Fuse::Elements::Element* elm, int* row);
void Grid__SetRowSpan_fn(::g::Fuse::Elements::Element* elm, int* span);

struct Grid : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::GridLayout*> _gridLayout;

    void ctor_7();
    uString* Columns();
    void Columns(uString* value);
    uString* Rows();
    void Rows(uString* value);
    static Grid* New4();
    static void SetColumn(::g::Fuse::Elements::Element* elm, int col);
    static void SetColumnSpan(::g::Fuse::Elements::Element* elm, int span);
    static void SetRow(::g::Fuse::Elements::Element* elm, int row);
    static void SetRowSpan(::g::Fuse::Elements::Element* elm, int span);
};
// }

}}} // ::g::Fuse::Controls
