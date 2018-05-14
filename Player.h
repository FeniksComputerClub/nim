#pragma once

class Player
{
 public:
  virtual Move move(Piles const& piles) const = 0;
};
