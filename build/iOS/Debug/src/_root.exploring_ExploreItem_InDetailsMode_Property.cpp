// This file was generated based on /Users/Omkareshwar/Downloads/exploring/.uno/ux11/exploring.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ExploreItem.h>
#include <_root.exploring_ExploreItem_InDetailsMode_Property.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class exploring_ExploreItem_InDetailsMode_Property :213
// {
static void exploring_ExploreItem_InDetailsMode_Property_build(uType* type)
{
    ::TYPES[0] = ::g::ExploreItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*ExploreItem*/], offsetof(::g::exploring_ExploreItem_InDetailsMode_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* exploring_ExploreItem_InDetailsMode_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(exploring_ExploreItem_InDetailsMode_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("exploring_ExploreItem_InDetailsMode_Property", options);
    type->fp_build_ = exploring_ExploreItem_InDetailsMode_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))exploring_ExploreItem_InDetailsMode_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))exploring_ExploreItem_InDetailsMode_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))exploring_ExploreItem_InDetailsMode_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))exploring_ExploreItem_InDetailsMode_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public exploring_ExploreItem_InDetailsMode_Property(ExploreItem obj, Uno.UX.Selector name) :216
void exploring_ExploreItem_InDetailsMode_Property__ctor_3_fn(exploring_ExploreItem_InDetailsMode_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :218
void exploring_ExploreItem_InDetailsMode_Property__Get1_fn(exploring_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->InDetailsMode(), void();
}

// public exploring_ExploreItem_InDetailsMode_Property New(ExploreItem obj, Uno.UX.Selector name) :216
void exploring_ExploreItem_InDetailsMode_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, exploring_ExploreItem_InDetailsMode_Property** __retval)
{
    *__retval = exploring_ExploreItem_InDetailsMode_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :217
void exploring_ExploreItem_InDetailsMode_Property__get_Object_fn(exploring_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :219
void exploring_ExploreItem_InDetailsMode_Property__Set1_fn(exploring_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetInDetailsMode(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :220
void exploring_ExploreItem_InDetailsMode_Property__get_SupportsOriginSetter_fn(exploring_ExploreItem_InDetailsMode_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public exploring_ExploreItem_InDetailsMode_Property(ExploreItem obj, Uno.UX.Selector name) [instance] :216
void exploring_ExploreItem_InDetailsMode_Property::ctor_3(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public exploring_ExploreItem_InDetailsMode_Property New(ExploreItem obj, Uno.UX.Selector name) [static] :216
exploring_ExploreItem_InDetailsMode_Property* exploring_ExploreItem_InDetailsMode_Property::New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    exploring_ExploreItem_InDetailsMode_Property* obj1 = (exploring_ExploreItem_InDetailsMode_Property*)uNew(exploring_ExploreItem_InDetailsMode_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
