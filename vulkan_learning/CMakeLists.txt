
find_package(Vulkan REQUIRED)

add_executable (vulkan_learning "vulkan_learning.cpp" "vulkan_learning.h")

set_property(TARGET vulkan_learning PROPERTY CXX_STANDARD 20)

target_link_libraries(vulkan_learning Vulkan::Vulkan)