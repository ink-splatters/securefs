#define CATCH_CONFIG_RUNNER 1
#include "platform.h"
#include <catch2/catch_all.hpp>

int main(int argc, char** argv)
{
#ifdef WIN32
    securefs::windows_init();
#endif
    securefs::OSService::get_default().ensure_directory("tmp", 0755);
    Catch::Session s;
    return s.run(argc, argv);
}
