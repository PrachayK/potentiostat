#ifndef PS_MULTIPLEXER_H
#define PS_MULTIPLEXER_H

#include "ps_pin_map.h"
#include "ps_constants.h"
#include "ps_return_status.h"
#include "third-party/Array/Array.h"

namespace ps
{

    class Multiplexer
    {
        public:

            static const int MuxSwitchPin[NumMuxPin]; 
            static const int MuxToTiaPin[NumMuxChan];
            static const int MuxToGndPin[NumMuxChan];
            static const int NotConnected = -1;

            Multiplexer();

            void setupSwitchPins();
            void clearSwitchPins();

            void connectCtrElect();
            void disconnectCtrElect();

            void connectRefElect();
            void disconnectRefElect();

            void connectWrkElect(int electNum);
            void disconnectWrkElect();

            int currentWrkElect();
            bool isConnectedWrk();
            bool isConnectedCtr();
            bool isConnectedRef();

            // TODO
            // -------------------------------------------------------------------

            void connectFirstEnabledWrkElect();
            void connectNextEnabledWrkElect();   

            void start();  
            void stop();
            bool isRunning();

            void enableWrkElect(int electNum);
            void disableWrkElect(int electNum);

            void enableAllWrkElect();
            void disableAllWrkElect();

            void setEnabledWrkElect(Array<int,NumMuxChan> enabledArray);
            Array<int,NumMuxChan> getEnabledWrkElect();

            int numEnabledWrkElect();

            // -------------------------------------------------------------------

        protected:

            bool running_ = false;
            int currWrkElect_ = NotConnected;
            Array<int,NumMuxChan> enabledWrkElectArray_;

            void setAllChanToGnd();
            int electNumToIndex(int electNum);
            int indexToElectNum(int index);
    };

}

#endif
