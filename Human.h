#pragma once

#include "Player.h"

class Human : public Player
{
 public:
  override Move move(Piles const& piles) const;
};
