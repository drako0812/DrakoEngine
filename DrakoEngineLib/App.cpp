#include "del_pch.hpp"
#include "DrakoEngine.hpp"

namespace DrakoEngine {

    App::App() : Window{}, ShouldClose{false}, DoSoftReset{true}, DoHardReset{true} {

    }

    App::~App() {
    }

    App::Result App::Startup() {
        Window.create(sf::VideoMode(800, 600), "Drako Engine", sf::Style::Close | sf::Style::Titlebar);

        return Result::Success;
    }

    App::Result App::Shutdown() {
        Window.close();

        return Result::Success;
    }

    void App::HandleEvent(sf::Event const & event) {
        switch (event.type) {
        case sf::Event::Closed: ShouldClose = true; break;
        }
    }

    void App::Update() {
        sf::Event event;
        while (Window.pollEvent(event)) {
            HandleEvent(event);
        }
    }

    void App::Render() {
        const auto default_clear_color = sf::Color(64, 128, 255);
        Window.clear(default_clear_color);
        Window.display();
    }

    App::Result App::Run(int argc, char * argv[]) {
        Arguments.clear();
        for (Int i = 0; i < argc; i++) {
            Arguments.push_back(argv[i]);
        }

        if (ClientRun() == Result::Failure) { return Result::Failure; }

        if (Startup() == Result::Failure) { return Result::Failure; }

        while (!ShouldClose) {
            Update();
            Render();
        }

        if (Shutdown() == Result::Failure) { return Result::Failure; }

        return Result::Success;
    }

    /*App::Result App::SoftReset() {
        DoSoftReset = true;
    }

    App::Result App::HardReset() {
        DoHardReset = true;
        DoSoftReset = true;
    }*/

    App::Result App::ClientRun() {
        return Result::Success;
    }

}
