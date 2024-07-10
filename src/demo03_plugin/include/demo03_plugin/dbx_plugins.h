#ifndef XXX_POLYGON_PLUGINS_H_
#define XXX_POLYGON_PLUGINS_H_
#include "demo03_plugin/dbx_base.h" // 引入polygon_base.h头文件
#include <cmath> // 引入cmath头文件

namespace polygon_plugins // polygon_plugins命名空间
{
  class Triangle : public polygon_base::RegularPolygon // Triangle类继承自RegularPolygon类
  {
    public:
      Triangle(){} // 构造函数

      void initialize(double side_length) // 初始化函数
      {
        side_length_ = side_length; // 存储边长
      }

      double area() // 面积函数
      {
        return 0.5 * side_length_ * getHeight(); // 计算面积
      }

      double getHeight() // 获取高度函数
      {
        return sqrt((side_length_ * side_length_) - ((side_length_ / 2) * (side_length_ / 2))); // 计算高度
      }

    private:
      double side_length_; // 边长
  };

  class Square : public polygon_base::RegularPolygon // Square类继承自RegularPolygon类
  {
    public:
      Square(){} // 构造函数

      void initialize(double side_length) // 初始化函数
      {
        side_length_ = side_length; // 存储边长
      }

      double area() // 面积函数
      {
        return side_length_ * side_length_; // 计算面积
      }

    private:
      double side_length_; // 边长

  };
};
#endif
