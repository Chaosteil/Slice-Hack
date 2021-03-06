#ifndef SLICE_HACK_LOGIC_GAME_MAP_GAMEMAPRANDOMIZER_H_
#define SLICE_HACK_LOGIC_GAME_MAP_GAMEMAPRANDOMIZER_H_

#include "logic/game_map/position.h"

namespace slice_hack {
namespace game_map {

class GameMapSectionManagerInterface;

class GameMapRandomizer {
 public:
  GameMapRandomizer();
  virtual ~GameMapRandomizer();

  void RandomizeTerrain(GameMapSectionManagerInterface *manager,
                        int width, int height,
                        int section_width, int section_height);

 private:
  void BuildFoundation();
  void GenerateDirt();
  void AddObjects();
  void GenerateWater();
  void AddSpawnpoint();
  void GenerateRoads();
  void AddWaterDirt();

  void DrawPoint(const Position &pos, char type);
  char GetPoint(const Position &pos);
  
  GameMapSectionManagerInterface *manager_;
  int width_, height_;
  int section_width_, section_height_;
};

}  // namespace game_map
}  // namespace slice_hack

#endif  // SLICE_HACK_LOGIC_GAME_MAP_GAMEMAPRANDOMIZER_H_
