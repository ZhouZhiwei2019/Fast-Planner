cmake_minimum_required(VERSION 2.8.3)
project(bspline_opt)

# 指定C++14标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找NLopt库
find_package(nlopt REQUIRED)

# 查找其他依赖项
find_package(Eigen3 REQUIRED)
find_package(PCL 1.7 REQUIRED)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  visualization_msgs
  cv_bridge
  plan_env
)

catkin_package(
 INCLUDE_DIRS include
 LIBRARIES bspline_opt
 CATKIN_DEPENDS plan_env
)

include_directories(
    SYSTEM 
    include 
    ${catkin_INCLUDE_DIRS}
    ${Eigen3_INCLUDE_DIRS} 
    ${PCL_INCLUDE_DIRS}
    ${NLopt_INCLUDE_DIRS}  # 使用 ${NLopt_INCLUDE_DIRS} 而不是手动设置
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Wall")

add_library(bspline_opt 
    src/bspline_optimizer.cpp 
)

target_link_libraries(bspline_opt
    ${catkin_LIBRARIES} 
    nlopt  # 使用 ${NLopt_LIBRARIES} 而不是手动设置
)
