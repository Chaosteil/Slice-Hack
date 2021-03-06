#include "logic/game_map/entities/entity.h"

namespace slice_hack {
namespace game_map {
namespace entities {

Entity::Entity(const boost::uuids::uuid &id, const std::string &name,
               const std::string &gfx, const Health &health)
    : EventTickInterface(),
      id_(id), name_(name), gfx_(gfx), health_(health) {}

Entity::~Entity() {}

const std::string &Entity::name() const {
  return name_;
}

const std::string &Entity::gfx() const {
  return gfx_;
}

const Health &Entity::health() {
  return health_;
}

const boost::uuids::uuid &Entity::id() const {
  return id_;
}

EntityPositionManagerInterface *Entity::entity_position_manager() const {
  return entity_position_manager_;
}

void Entity::set_entity_position_manager(
    EntityPositionManagerInterface *entity_position_manager) {
  entity_position_manager_ = entity_position_manager;
}

void Entity::Run() {}

}  // namespace entities
}  // namespace game_map
}  // namespace slice_hack
