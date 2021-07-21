// Copyright (c) 2021 Trunk Inc. All rights reserved.

#include "factory.h"
// 基类 规划器
class Planner
{
public:
  virtual void Show() = 0;
  virtual ~Planner() {}
};

class PathPlanner : public Planner{
  void Show()
  {
    std::cout << "Path planner" << std::endl;
  }
};

class SpeedPlanner : public Planner{
  void Show()
  {
    std::cout << "Speed planner" << std::endl;
  }
};

class KinematicPlanner : public Planner
{
public:
  void Show()
  {
    std::cout << "Path planner: Kinematic" << std::endl;
  }
};

// 基类 衣服
class Clothe
{
public:
  virtual void Show() = 0;
  virtual ~Clothe() {}
};

// 优衣库衣服
class Optimizer : public Planner
{
public:
  void Show()
  {
    std::cout << "Path planner: Kinematic" << std::endl;
  }
};