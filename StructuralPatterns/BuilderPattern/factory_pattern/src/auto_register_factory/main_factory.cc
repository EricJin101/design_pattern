#include "factory.h"

int main()
{
  std::shared_ptr<ProductAFactory> tempA=std::static_pointer_cast<ProductAFactory>(classFromName("ProductAFactory"));
  tempA->createProduct()->makeProduct();
  std::shared_ptr<ProductBFactory> tempB=std::static_pointer_cast<ProductBFactory>(classFromName("ProductBFactory"));
  tempB->createProduct()->makeProduct();
}