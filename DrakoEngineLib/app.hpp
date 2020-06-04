#pragma once

#include "DrakoEngine.hpp"

namespace sf {
    struct Event;
}

namespace DrakoEngine {

    /// @brief Entry point class of a Game/Application
    DRAKOENGINELIB_EXPORTED class App {
    public:

        /// @brief Signals success or failure of some functions.
        enum class Result {
            Success, //!< Indicates successful execution.
            Failure, //!< Indicates some kind of failure.
        };

        /// @brief Runs before entering the game loop.
        virtual Result Startup();

        /// @brief Runs after exiting the game loop.
        virtual Result Shutdown();

        /// @brief Handles individual events.
        virtual void HandleEvent(sf::Event const & event);

        /// @brief Updates game or application state once per game loop.
        virtual void Update();

        /// @brief Renders graphics to the screen.
        virtual void Render();

        /// @brief Starts the game loop.
        ///
        /// Starts the game loop using the following execution order:
        ///
        /// 1. Startup()
        /// 2. Game Loop:
        ///    1. Update()
        ///       1. HandleEvent(event)
        ///    2. Render()
        /// 3. Shutdown()
        Result Run(int argc, char * argv[]);

        /// @brief Resets the state of the game/application without destroying
        /// the window or unloading major engine components.
        virtual Result SoftReset();

        /// @brief Resets the game similarly to closing the game and restarting it manually.
        virtual Result HardReset();

    protected:

        /// @brief Execute client Run code such as handling command-line arguments.
        virtual Result ClientRun();

    public:

        /// @brief Holds the command-line arguments.
        vec<str> Arguments;
    };

}
