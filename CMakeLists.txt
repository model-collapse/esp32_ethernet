cmake_minimum_required(VERSION 3.12.4)
if(NOT ESP_PLATFORM)
  project(eth HOMEPAGE_URL https://github.com/model-collpase/esp32_ethernet.git)
endif()

file(GLOB SOURCES *.c)

set(LVGL_INCLUDE_DIRS .)

idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS ${LVGL_INCLUDE_DIRS}
                       )