// This file was generated based on '/Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.1.1/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.PlaybackAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct PlayTo;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class PlayTo :540
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof();
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target);
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval);
void PlayTo__set_Progress_fn(PlayTo* __this, double* value);

struct PlayTo : ::g::Fuse::Triggers::Actions::PlaybackAction
{
    double _Progress;

    double Progress();
    void Progress(double value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
