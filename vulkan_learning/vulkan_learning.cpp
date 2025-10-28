// vulkan_learning.cpp : Defines the entry point for the application.
//

#include "vulkan_learning.h"
#include "vulkan/vulkan_raii.hpp"

/*
typedef struct VkApplicationInfo {
    VkStructureType    sType;
    const void*        pNext;
    const char*        pApplicationName;
    uint32_t           applicationVersion;
    const char*        pEngineName;
    uint32_t           engineVersion;
    uint32_t           apiVersion;
} VkApplicationInfo;
*/

int main() {
	auto extensions = vk::enumerateInstanceExtensionProperties();
    vk::ApplicationInfo app_info{
        "Name", 
        vk::makeVersion(1,0,0), 
        "EngineName", 
        vk::makeVersion(1,0,0), 
        vk::ApiVersion10
    };
    vk::InstanceCreateInfo info{{},&app_info};
	vk::raii::Context ctx{};
	vk::raii::Instance instance{ctx, info};



    std::cout << app_info.pApplicationName << '\n';
    std::cout << app_info.applicationVersion << '\n';  // 4194304 или 10000000000000000000000
}
