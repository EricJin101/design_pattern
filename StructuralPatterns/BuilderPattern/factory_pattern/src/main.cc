#include "factory.cc"

int main()
{
  // 构造kinematic的工厂对象
  ConcreteFactory<SpeedPlanner, KinematicPathPlanner> kinematicFactory;
  // 创建耐克鞋对象
  SpeedPlanner *path_planner = kinematicFactory.CreateProduct();
  // path planner printer
  path_planner->Show();

  // 构造优衣库衣服的工厂对象
  ConcreteFactory<SpeedPlanner, OptimizerPathPlanner> optimizerFactory;
  // 创建优衣库衣服对象
  path_planner = optimizerFactory.CreateProduct();
  // 打印优衣库广告语
  path_planner->Show();

  // 释放资源
  delete path_planner;
  path_planner = NULL;

  delete path_planner;
  path_planner = NULL;

  return 0;
}