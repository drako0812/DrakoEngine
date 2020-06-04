======================
class DrakoEngine::App
======================

.. cpp:namespace:: DrakoEngine

.. cpp:class: App

   .. cpp:enum-class:: Result
   
      .. cpp:enumeration:: Success
      
      .. cpp:enumeration:: Failure

   .. cpp:function:: virtual Result Startup()
   
   .. cpp:function:: virtual Result Shutdown()
   
   .. cpp:function:: virtual void HandleEvent(const sf::Event & event)
   
   .. cpp:function:: virtual void Update()
   
   .. cpp:function:: virtual void Render()
   
   .. cpp:function:: Result Run(int argc, char * argv[])
   
   .. cpp:function:: virtual Result SoftReset()
   
   .. cpp:function:: virtual Result HardReset()
   
   .. cpp:function:: virtual Result ClientRun()
   
   .. cpp:var:: vector<string> Arguments

.. cpp:namespace:: 0
