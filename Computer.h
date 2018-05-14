#pragma once

#include "Player.h"

class Computer : public Player
{
 public:
  override Move move(Piles const& piles) const;
};
