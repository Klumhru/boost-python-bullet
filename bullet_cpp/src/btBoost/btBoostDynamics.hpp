// File: btBoostDynamics.hpp
#ifndef _btBoostDynamics_hpp
#define _btBoostDynamics_hpp

#include "btBoostDynamicsDbvtBroadphase.hpp"
#include "btBoostDynamicsDefaultCollisionConfiguration.hpp"
#include "btBoostDynamicsCollisionDispatcher.hpp"
#include "btBoostDynamicsSequentialImpulseConstraintSolver.hpp"
#include "btBoostDynamicsDiscreteDynamicsWorld.hpp"
#include "btBoostDynamicsShapes.hpp"

void defineDynamics()
{
    defineDbvtBroadphase();
    defineDefaultCollisionConfiguration();
    defineCollisionDispatcher();
    defineSequentialImpulseConstraintSolver();
    defineDiscreteDynamicsWorld();
    defineShapes();
}

#endif // _btBoostDynamics_hpp
