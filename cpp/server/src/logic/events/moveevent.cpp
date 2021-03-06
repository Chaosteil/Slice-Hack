#include "logic/events/moveevent.h"

#include "logic/events/eventvisitorinterface.h"
#include "logic/game_map/entities/entity.h"

namespace slice_hack {
namespace events {

MoveEvent::MoveEvent(game_map::entities::Entity *origin)
    : Event(false, origin) {}

MoveEvent::~MoveEvent() {}

void MoveEvent::Accept(EventVisitorInterface *event_visitor) {
  event_visitor->Visit(this);
}

}  // namespace events 
}  // namespace slice_hack
