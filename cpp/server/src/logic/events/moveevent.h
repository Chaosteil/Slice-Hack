#ifndef SLICE_HACK_LOGIC_EVENTS_MOVEEVENT_H_
#define SLICE_HACK_LOGIC_EVENTS_MOVEEVENT_H_

#include "logic/events/event.h"

namespace slice_hack {
namespace events {

class MoveEvent : public Event {
 public:
  MoveEvent(game_map::entities::Entity *origin);
  virtual ~MoveEvent();

  virtual void Accept(EventVisitorInterface *event_visitor);
};

}  // namespace events
}  // namespace slice_hack

#endif  // SLICE_HACK_LOGIC_EVENTS_MOVEEVENT_H_
