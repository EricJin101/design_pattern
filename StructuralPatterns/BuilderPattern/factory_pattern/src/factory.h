// Copyright (c) 2021 Trunk Inc. All rights reserved.
#include <iostream>
#ifndef FACTORY_PATTERN_FACTORY_H
#define FACTORY_PATTERN_FACTORY_H
// 抽象模板工厂类
// 模板参数：AbstractProduct_t 产品抽象类
template <class AbstractProduct_t>
class AbstractFactory
{
public:
  virtual AbstractProduct_t *CreateProduct() = 0;
  virtual ~AbstractFactory() {}
};

// 具体模板工厂类
// 模板参数：AbstractProduct_t 产品抽象类，ConcreteProduct_t 产品具体类
template <class AbstractProduct_t, class ConcreteProduct_t>
class ConcreteFactory : public AbstractFactory<AbstractProduct_t>
{
public:
  AbstractProduct_t *CreateProduct()
  {
    return new ConcreteProduct_t();
  }
};
#endif //FACTORY_PATTERN_FACTORY_H
