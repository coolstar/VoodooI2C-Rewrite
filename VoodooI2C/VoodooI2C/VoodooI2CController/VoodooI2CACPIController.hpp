//
//  VoodooI2CACPIController.hpp
//  VoodooI2C
//
//  Created by Alexandre on 02/08/2017.
//  Copyright © 2017 Alexandre Daoud. All rights reserved.
//

#ifndef VoodooI2CACPIController_hpp
#define VoodooI2CACPIController_hpp

#include "VoodooI2CController.hpp"

class VoodooI2CACPIController : public VoodooI2CController {
    OSDeclareDefaultStructors(VoodooI2CACPIController);

 private:
    // data members

    VoodooI2CState acpi_power_state;

    // function members

    IOReturn setPowerState(unsigned long whichState, IOService * whatDevice);
    IOReturn setACPIPowerState(VoodooI2CState enabled);
    bool start(IOService* provider);
    void stop(IOService* provider);
};

#endif /* VoodooI2CACPIController_hpp */
