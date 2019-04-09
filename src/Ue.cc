#include <string.h>
#include <omnetpp.h>
#include <stdlib.h>
#include "MyMessage_m.h"
#include <math.h>
#include <queue>

using namespace omnetpp;

class Ue : public cSimpleModule{

    public:
        Ue();
        ~Ue();
    protected:
        /*virtual void initialize() override;
            virtual void handleMessage(cMessage *msg) override;
            virtual void finish() override;
            virtual MyMessage *generateMessage(const char* s);*/
            cMessage *msg;
            cMessage *event;
};

//Define_Module(Ue);

Ue::Ue() {
    event = msg = nullptr;
}

Ue::~Ue() {
    cancelAndDelete(event);
    delete msg;
}
