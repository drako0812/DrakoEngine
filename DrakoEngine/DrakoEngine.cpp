#include "pch.hpp"
#include "DrakoEngine.hpp"

int main(int argc, char * argv[]) {
    return static_cast<int>(DrakoEngine::App{}.Run(argc, argv));
}
