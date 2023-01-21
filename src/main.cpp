#include <iostream>
#include <thread>
#include <mach-o/dyld.h>

enum colours : std::uint8_t
{
    regular,
    info,
    warn,
    error
};

auto entry() -> void
{
    // address is for version-c7d5978a8bea4dfd
    const auto print = reinterpret_cast<void(*)(std::uint8_t, const char*, ...)>(_dyld_get_image_vmaddr_slide(0) + 0x100b47aaa);

    print(colours::regular, "this is white");
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    print(colours::info, "this is blue");
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    print(colours::warn, "this is yellow");
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    print(colours::error, "this is red");
}

__attribute__ ((constructor))
auto c_main() -> void
{
    std::thread{ entry }.detach();
}