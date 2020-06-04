#pragma once

namespace DrakoEngine {
    
    DRAKOENGINELIB_EXPORTED class App {
    public:
      enum class Result {
        Success,
        Failure,
      };
    
      virtual Result Startup();
      virtual Result Shutdown();
      virtual void HandleEvent(sf::Event const & event);
      virtual void Update();
      virtual void Render();
      Result Run(int argc, char * argv[]);
      virtual Result SoftReset();
      virtual Result HardReset();
      
    protected:
      virtual Result ClientRun();
      
    public:
      vector<string> Arguments;
    };
    
}
