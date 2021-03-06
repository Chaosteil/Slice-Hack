#include "logic/events/enterevent.h"

#include "logic/events/eventvisitorinterface.h"
#include "logic/game_map/entities/entity.h"

namespace slice_hack {
namespace events {

EnterEvent::EnterEvent(game_map::entities::Entity *origin)
    : Event(true, origin) {}

EnterEvent::~EnterEvent() {}

void EnterEvent::Accept(EventVisitorInterface *event_visitor) {
  event_visitor->Visit(this);
}

}  // namespace events 
}  // namespace slice_hack
