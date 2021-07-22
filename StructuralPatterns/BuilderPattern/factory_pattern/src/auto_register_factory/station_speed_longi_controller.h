
class Product{
public:
  using Ptr=std::shared_ptr<Product>;
  virtual void makeProduct()=0;
};

class ProductA : public Product {
public:
  virtual void makeProduct()
  {
    std::cout<<"Make Product A!"<<std::endl;
  }
};

class ProductB : public Product {
public:
  virtual void makeProduct()
  {
    std::cout<<"Make Product B!"<<std::endl;
  }
};

class Factory{
public:
  using Ptr=std::shared_ptr<Factory>;
  virtual Product::Ptr createProduct()=0;
};

class ProductAFactory : public Factory
{
public:
  virtual Product::Ptr createProduct(/* args */)
  {
    return std::make_shared<ProductA>();
  }

};

class ProductBFactory : public Factory {
public:
  virtual Product::Ptr createProduct(){
    return std::make_shared<ProductB>();
  }
};
