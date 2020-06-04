======================
class DrakoEngine::App
======================

.. cpp:namespace:: DrakoEngine

   .. cpp:class: App
   
      Entry point class of a Game/Application.

      .. cpp:enum-class:: Result
      
         Signals Success or Failure of some functions.
   
         .. cpp:enumeration:: Success
      
         .. cpp:enumeration:: Failure

      .. cpp:function:: virtual Result Startup()
      
         Runs before entering the game loop.
   
      .. cpp:function:: virtual Result Shutdown()
      
         Runs after exiting the game loop.
   
      .. cpp:function:: virtual void HandleEvent(const sf::Event & event)
      
         Handles individual events
   
      .. cpp:function:: virtual void Update()
      
         Updates game or application state once per game loop.
   
      .. cpp:function:: virtual void Render()
      
         Renders graphics to the screen.
   
      .. cpp:function:: Result Run(int argc, char * argv[])
      
         Starts the game loop using the following execution order::
         
         1. Startup()
         2. Game Loop
            
            1. Update()
            
               1. HandleEvent(event)
            
            2. Render()
         
         3. Shutdown()
   
      .. cpp:function:: virtual Result SoftReset()
      
         Resets the state of the game/application without destroying the window or unloading major engine components.
   
      .. cpp:function:: virtual Result HardReset()
      
         Resets the game similarly to closing the game and restarint it manually.
   
      .. cpp:function:: virtual Result ClientRun()
      
         Executed client Run code like handling command-line arguments.
   
      .. cpp:var:: vector<string> Arguments
      
         Holds the command-line arguments.

.. cpp:namespace:: 0
