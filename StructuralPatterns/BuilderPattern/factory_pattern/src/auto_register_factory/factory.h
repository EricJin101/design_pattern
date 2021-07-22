// factory.h
#ifndef _REFLECTION_TEMPLATE_H_
#define _REFLECTION_TEMPLATE_H_
#include <iostream>
#include <map>
#include <utility>
#include <string>
#include <functional>
#include <memory>
#include "station_speed_longi_controller.h"


static std::map<std::string, std::function<std::shared_ptr<void> ()>> class_map;
static std::shared_ptr<void> classFromName(std::string str)
{
  if(class_map.find(str)==class_map.end()) return nullptr;
  return class_map[str]();
}

class Register{
public:
  Register(std::string str, std::function<std::shared_ptr<void>()> func)
  {
    class_map.insert(std::make_pair(str, func));
  }
};

#define REGISTER(classname)                                \
        class Register##classname {                        \
            public:                                        \
            static std::shared_ptr<classname> instance(){  \
              return std::make_shared<classname>();        \
            }                                              \
        };                                                 \
       auto temp##classname= Register(std::string(#classname), Register##classname::instance);

REGISTER(ProductAFactory)
REGISTER(ProductBFactory)

#endif