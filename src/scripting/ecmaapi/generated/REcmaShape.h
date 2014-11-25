// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAPE_H
        #define RECMASHAPE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RShape.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaShape {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInterpolated
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestPointOnShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        to2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOnShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        filterOnShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorFromEndpointTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointAtPercent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        intersectsWith
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stretch
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        order
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLL
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLA
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLC
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLE
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLT
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLS
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAA
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAC
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAE
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAT
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAS
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsCC
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsCE
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsCS
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsCX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsEE
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsES
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsEX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsXX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        castToExplodable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        dump
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RShape* getSelf(const QString& fName, QScriptContext* context)
    ;static RShape* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    