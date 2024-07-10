// 定义一个名为XXX_POLYGON_BASE_H_的宏，用于防止头文件重复包含
#ifndef XXX_POLYGON_BASE_H_
#define XXX_POLYGON_BASE_H_

// 定义一个名为polygon_base的命名空间
namespace polygon_base
{
  // 定义一个名为RegularPolygon的类，用于表示正多边形
  class RegularPolygon
  {
    public:
      // 虚函数，用于初始化正多边形
      virtual void initialize(double side_length) = 0;
      // 虚函数，用于计算正多边形的面积
      virtual double area() = 0;
      // 虚函数，用于析构正多边形
      virtual ~RegularPolygon(){}

    protected:
      // 构造函数，用于初始化正多边形
      RegularPolygon(){}
  };
};
#endif