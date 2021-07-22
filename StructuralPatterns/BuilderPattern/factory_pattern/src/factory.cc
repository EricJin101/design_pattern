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
public:
  void Show()
  {
    std::cout << "Path planner" << std::endl;
  }
};

class SpeedPlanner : public PathPlanner{
public:
  void Show()
  {
    std::cout << "Speed planner" << std::endl;
  }
};

class KinematicPathPlanner : public SpeedPlanner
{
public:
  void Show() override
  {
    std::cout << "Path planner: Kinematic" << std::endl;
  }
};

class Clothe
{
public:
  virtual void Show() = 0;
  virtual ~Clothe() {}
};


class OptimizerPathPlanner : public SpeedPlanner
{
public:
  void Show()
  {
    std::cout << "Path planner: Optimizer" << std::endl;
  }
};