#include "DefaultCollisionConfiguration.hpp"

#include <boost/python.hpp>
#include <btBulletDynamicsCommon.h>
#include <btBoost/LinearMath/PoolAllocator.hpp>

using namespace boost::python;

void defineDefaultCollisionConfiguration()
{
    class_<btDefaultCollisionConstructionInfo>("btDefaultCollisionConstructionInfo")
        .add_property("persistentManifoldPool",
            &btDefaultCollisionConstructionInfo::m_persistentManifoldPool)
        .add_property("collisionAlgorithmPool",
            &btDefaultCollisionConstructionInfo::m_collisionAlgorithmPool)
        .add_property("defaultMaxPersistentManifoldPoolSize",
            &btDefaultCollisionConstructionInfo::m_defaultMaxPersistentManifoldPoolSize)
        .add_property("defaultMaxCollisionAlgorithmPoolSize",
            &btDefaultCollisionConstructionInfo::m_defaultMaxCollisionAlgorithmPoolSize)
        .add_property("customCollisionAlgorithmMaxElementSize",
            &btDefaultCollisionConstructionInfo::m_customCollisionAlgorithmMaxElementSize)
        .add_property("useEpaPenetrationAlgorithm",
            &btDefaultCollisionConstructionInfo::m_useEpaPenetrationAlgorithm)
    ;

    class_<btCollisionConfiguration,
           boost::noncopyable>("btCollisionConfiguration", no_init)
    ;

    class_<btDefaultCollisionConfiguration,
           bases<btCollisionConfiguration> >("btDefaultCollisionConfiguration")
        .def(init<const btDefaultCollisionConstructionInfo&>())
    ;
}
