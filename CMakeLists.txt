cmake_minimum_required(VERSION 4.4)
project(RayTracer)

set(CMAKE_CXX_STANDARD 26)

add_executable(RayTracer main.cpp
        vec3.h
        color.h
        ray.h
        hittable.h
        sphere.h
        hittable_list.h)
